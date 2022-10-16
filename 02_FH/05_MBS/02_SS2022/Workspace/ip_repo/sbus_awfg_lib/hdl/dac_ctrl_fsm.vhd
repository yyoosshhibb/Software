-- VHDL Entity sbus_awfg_lib.dac_ctrl.symbol
--
-- Created:
--          by - net.UNKNOWN (KPERSM7467)
--          at - 11:47:11 03.12.2018
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity dac_ctrl is
   port( 
      -- Users to add ports here
      clk           : in     std_logic;
      dac0          : in     std_logic_vector (15 downto 0);
      dac1          : in     std_logic_vector (15 downto 0);
      format_signed : in     std_logic;
      reset         : in     std_logic;
      sample_dac    : in     std_logic;
      dac_sclk      : out    std_logic;
      dac_sdin0     : out    std_logic;
      dac_sdin1     : out    std_logic;
      dac_sync      : out    std_logic
   );

-- Declarations

end dac_ctrl ;

--
-- VHDL Architecture sbus_awfg_lib.dac_ctrl.fsm
--
-- Created:
--          by - Net.UNKNOWN (M00443)
--          at - 15:14:54 27.05.2022
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
 
architecture fsm of dac_ctrl is

   -- Architecture Declarations
   signal fsm_en_cnt: std_logic_vector(2 downto 0);
   signal fsm_en: std_logic;
   signal bit_cnt: std_logic_vector(4 downto 0);
   signal sclk_tmp, sync_tmp: std_logic;
   signal txreg0, txreg1: std_logic_vector(15 downto 0);
   signal sample_dac_reg: std_logic;
   signal dac0_tmp,dac1_tmp: std_logic_vector(15 downto 0);

   type state_type is (
      s_wait,
      s0,
      s1,
      s_end
   );
 
   -- Declare current and next state signals
   signal current_state : state_type;
   signal next_state : state_type;

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
            sclk_tmp <= '1';
            sync_tmp <= '1';
         elsif (fsm_en = '1') then
            current_state <= next_state;

            -- Combined Actions
            case current_state is
               when s_wait => 
                  if (sample_dac_reg = '1') then 
                     txreg0 <= "00" & dac0_tmp(15 downto 4) & "00";
                     txreg1 <= "00" & dac1_tmp(15 downto 4) & "00";
                     sclk_tmp <= '1';
                     sync_tmp <= '0';
                     bit_cnt <= (others => '0');
                  end if;
               when s0 => 
                  sclk_tmp <= '0';
               when s1 => 
                  if (bit_cnt = 15) then 
                     sync_tmp <= '1';
                  else
                     sclk_tmp <= '1';
                     txreg0 <= txreg0(txreg0'left-1 downto 0) & '0';
                     txreg1 <= txreg1(txreg1'left-1 downto 0) & '0';
                     bit_cnt <= bit_cnt+1;
                  end if;
               when others =>
                  null;
            end case;
         end if;
      end if;
   end process clocked_proc;
 
   -----------------------------------------------------------------
   nextstate_proc : process ( 
      bit_cnt,
      current_state,
      sample_dac_reg
   )
   -----------------------------------------------------------------
   begin
      case current_state is
         when s_wait => 
            if (sample_dac_reg = '1') then 
               next_state <= s0;
            else
               next_state <= s_wait;
            end if;
         when s0 => 
            next_state <= s1;
         when s1 => 
            if (bit_cnt = 15) then 
               next_state <= s_end;
            else
               next_state <= s0;
            end if;
         when s_end => 
            next_state <= s_wait;
         when others =>
            next_state <= s_wait;
      end case;
   end process nextstate_proc;
 
   -- Concurrent Statements
   --assign to output signals------
   dac_sclk <= sclk_tmp;
   dac_sync <= sync_tmp;
   dac_sdin0 <= txreg0(15);
   dac_sdin1 <= txreg1(15);
   
   dac0_tmp <= dac0 xor X"8000" when format_signed = '1' else dac0;
   dac1_tmp <= dac1 xor X"8000" when format_signed = '1' else dac1;
   
   ---generate enable strobe "fsm_en" for the FSM timegrid
   process(clk)
   begin
      if rising_edge(clk) then
         if reset = '1' or fsm_en = '1'  then
             fsm_en_cnt <= (others => '0');
         else
             fsm_en_cnt <= fsm_en_cnt+1;
         end if;
      end if;
   end process;
   
   ---modulo counter determines the time tick of fsm
   -- and hence the speed of the spi clock
   fsm_en  <= '1' when fsm_en_cnt = 2 else '0';
   
   --resynchronize external trigger to fsm_en time grid---
   process(clk)
   begin
      if rising_edge(clk) then
         if reset = '1'  then
             sample_dac_reg <= '0';
         else
            if sample_dac = '1' then       --external trigger strobe
                 sample_dac_reg <= '1';  -- register ext. trigger
            elsif fsm_en = '1' then
                 sample_dac_reg <= '0';  --clear registered trigger
            end if;
         end if;
      end if;
   end process;
end fsm;