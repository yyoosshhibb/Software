-- VHDL Entity sbus_awfg_lib.uart_rx.symbol
--
-- Created:
--          by - Net.UNKNOWN (M00443)
--          at - 18:27:30 25.09.2006
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

entity uart_rx is
   generic( 
      baudrate_g      : integer := 9600;
      core_clk_freq_g : integer := 50000000
   );
   port( 
      clk    : in     std_logic;
      reset  : in     std_logic;
      rxd    : in     std_logic;
      dout   : out    std_logic_vector (7 downto 0);
      rx_ack : out    std_logic
   );

-- Declarations

end uart_rx ;

--
-- VHDL Architecture sbus_awfg_lib.uart_rx.fsm
--
-- Created:
--          by - Net.UNKNOWN (M00443)
--          at - 19:56:47 24.03.2010
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
 
architecture fsm of uart_rx is

   -- Architecture Declarations
   constant bdcnt_mod_c: integer :=  core_clk_freq_g / baudrate_g / 8;
   signal bdcnt_en: std_logic;
   signal bdcnt_tc: std_logic;
   signal bdcnt: integer range 0 to bdcnt_mod_c-1;
   signal rx_reg: std_logic_vector(dout'left downto 0);
   signal bit_cnt: integer range 0 to dout'length+1;
   signal sample_cnt: integer range 0 to 7;
   signal symbol_val: std_logic_vector(3 downto 0);
   signal dout_int: std_logic_vector(dout'range);
   signal rxd_q1, rxd_q2: std_logic;
   signal escape: std_logic;

   type state_type is (
      s_wait,
      s_rx,
      s_rx1,
      s_reg
   );
 
   -- State vector declaration
   attribute state_vector : string;
   attribute state_vector of fsm : architecture is "current_state";

   -- Declare current and next state signals
   signal current_state : state_type;
   signal next_state : state_type;

   -- Declare any pre-registered internal signals
   signal rx_ack_cld : std_logic ;

begin

   -----------------------------------------------------------------
   clocked_proc : process ( 
      clk
   )
   -----------------------------------------------------------------
   begin
      if (clk'event and clk = '1') then
         if (reset = '1') then
            current_state <= s_wait;
            -- Default Reset Values
            rx_reg <= (others => '0');
         else
            current_state <= next_state;
            -- Default Assignment To Internals
            rx_ack_cld <= '0';

            -- Combined Actions
            case current_state is
               when s_wait => 
                  if (rxd_q2 = '0') then 
                     symbol_val <= (others => '0');
                     sample_cnt <= 1;
                     bit_cnt <= rx_reg'length+1;
                     rx_reg <= (others => '0');
                  end if;
               when s_rx => 
                  if (bdcnt_tc = '1' and sample_cnt = 7) then 
                     if rxd_q2 = '1' then
                        symbol_val <= symbol_val+1;
                     end if;
                  elsif (bdcnt_tc = '1') then 
                     sample_cnt <= sample_cnt+1;
                     if rxd_q2 = '1' then
                        symbol_val <= symbol_val+1;
                     end if;
                  end if;
               when s_rx1 => 
                  if (escape = '1' and bdcnt_tc = '1') then 
                  elsif ((bdcnt_tc = '1') and (bit_cnt = 1)) then 
                     symbol_val <= (others => '0');
                     sample_cnt <= 1;
                     bit_cnt <= bit_cnt - 1;
                     rx_reg <= (symbol_val(2) or symbol_val(3)) &  rx_reg(rx_reg'left downto 1) ;
                     if rxd_q2 = '1' then
                        symbol_val <= "0001";
                     else
                        symbol_val <= "0000";
                     end if;
                  elsif (bdcnt_tc = '1') then 
                     symbol_val <= (others => '0');
                     sample_cnt <= 1;
                     bit_cnt <= bit_cnt - 1;
                     rx_reg <= (symbol_val(2) or symbol_val(3)) &  rx_reg(rx_reg'left downto 1) ;
                     if rxd_q2 = '1' then
                        symbol_val <= "0001";
                     else
                        symbol_val <= "0000";
                     end if;
                  end if;
               when s_reg => 
                  rx_ack_cld <= '1';
                  dout_int <= rx_reg;
               when others =>
                  null;
            end case;
         end if;
      end if;
   end process clocked_proc;
 
   -----------------------------------------------------------------
   nextstate_proc : process ( 
      bdcnt_tc,
      bit_cnt,
      current_state,
      escape,
      rxd_q2,
      sample_cnt
   )
   -----------------------------------------------------------------
   begin
      case current_state is
         when s_wait => 
            if (rxd_q2 = '0') then 
               next_state <= s_rx;
            else
               next_state <= s_wait;
            end if;
         when s_rx => 
            if (bdcnt_tc = '1' and sample_cnt = 7) then 
               next_state <= s_rx1;
            elsif (bdcnt_tc = '1') then 
               next_state <= s_rx;
            else
               next_state <= s_rx;
            end if;
         when s_rx1 => 
            if (escape = '1' and bdcnt_tc = '1') then 
               next_state <= s_wait;
            elsif ((bdcnt_tc = '1') and (bit_cnt = 1)) then 
               next_state <= s_reg;
            elsif (bdcnt_tc = '1') then 
               next_state <= s_rx;
            else
               next_state <= s_rx1;
            end if;
         when s_reg => 
            next_state <= s_wait;
         when others =>
            next_state <= s_wait;
      end case;
   end process nextstate_proc;
 
   -----------------------------------------------------------------
   output_proc : process ( 
      current_state
   )
   -----------------------------------------------------------------
   begin
      -- Default Assignment To Internals
      bdcnt_en <= '0';

      -- Combined Actions
      case current_state is
         when s_rx => 
            bdcnt_en <= '1';
         when s_rx1 => 
            bdcnt_en <= '1';
         when others =>
            null;
      end case;
   end process output_proc;
 
   -- Concurrent Statements
   -- Clocked output assignments
   rx_ack <= rx_ack_cld;
   -- baudrate counter ----------
   process(clk)
   begin
      if clk='1' and clk'event then
         if bdcnt_en = '0'  then
             bdcnt <= 0;
         else
             if bdcnt_tc = '1' then
                 bdcnt <= 0;
             else
               bdcnt <= bdcnt + 1;
             end if;
         end if;
     end if;
   end process;
   
   -- resample external rxd signal ---
   process(clk)
   begin
      if clk='1' and clk'event then
          if reset = '1' then
               rxd_q1 <= '1';
               rxd_q2 <= '1';
          else
               rxd_q1 <= rxd;
               rxd_q2 <= rxd_q1;
           end if;
       end if;
   end process;
   
   bdcnt_tc <= '1' when bdcnt = bdcnt_mod_c - 1 else '0';
   dout <= dout_int;
   
   -- escape when start bit is not zero ---
   escape <= '1' when bit_cnt = rx_reg'length+1 and symbol_val(3 downto 2) /= "00" else '0';
end fsm;