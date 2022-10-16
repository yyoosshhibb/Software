-- VHDL Entity sbus_awfg_lib.buscmd_b16_filesel.symbol
--
-- Created:
--          by - Net.UNKNOWN (M00443)
--          at - 13:19:41 15.06.2022
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

Library std;
use std.textio.all;

entity buscmd_b16_filesel is
   generic( 
      COMMANDS : string := "buscommands.txt"
   );
   port( 
      bus_addr    : out    std_logic_vector ( 15 downto 0 );
      bus_we      : out    std_logic;
      bus_dout    : out    std_logic_vector (31 downto 0);
      bus_rd      : out    std_logic;
      bus_din     : in     std_logic_vector (31 downto 0);
      clk         : in     std_logic;
      reset       : in     std_logic;
      bus_ack     : in     std_logic;
      eof         : out    std_logic;
      bus_request : out    std_logic;
      bus_grant   : in     std_logic
   );

-- Declarations

end buscmd_b16_filesel ;

--
-- VHDL Architecture sbus_awfg_lib.buscmd_b16_filesel.fsm
--
-- Created:
--          by - Net.UNKNOWN (M00443)
--          at - 13:29:18 15.06.2022
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
 
architecture fsm of buscmd_b16_filesel is

   -- Architecture Declarations
   signal bus_address_int: std_logic_vector(15 downto 0) := (others => '0');
   signal bus_data_int: std_logic_vector(31 downto 0) := (others => '0');
   signal bus_din_int: std_logic_vector(31 downto 0);
   signal bus_data_en: std_logic;
   signal next_cmd: std_logic := '0';
   signal rnw: std_logic;
   signal stop: std_logic := '0';
   signal halt: std_logic := '0';
   signal data_en: std_logic;
   signal  tb_filename:  string(1 to 32);
   signal timeout_cnt: integer;
   
   
   ------convert string with 8 elements to 32-bit standard logic vector 
   
   function STR8_2VEC (str: string (8 downto 1)) return std_logic_vector is
      variable vec: std_logic_vector(31 downto 0);
      variable tmp: std_logic_vector(3 downto 0);
   begin
       for i in 0 to 7 loop
          case str(i+1) is
             when '0'=> tmp := "0000";
             when '1'=> tmp := "0001";
             when '2'=> tmp := "0010";
             when '3'=> tmp := "0011";
             when '4'=> tmp := "0100";
             when '5'=> tmp := "0101";
             when '6'=> tmp := "0110";
             when '7'=> tmp := "0111";
             when '8'=> tmp := "1000";
             when '9'=> tmp := "1001";
             when 'A'=> tmp := "1010";
             when 'B'=> tmp := "1011";
             when 'C'=> tmp := "1100";
             when 'D'=> tmp := "1101";
             when 'E'=> tmp := "1110";
             when 'F'=> tmp := "1111";
             when others =>  tmp := "XXXX";
           end case;
           vec(4*i+3 downto 4*i) := tmp;
       end loop;
       return(vec);
   end STR8_2VEC;
   
   function STR4_2VEC (str: string (4 downto 1)) return std_logic_vector is
      variable vec: std_logic_vector(15 downto 0);
      variable tmp: std_logic_vector(3 downto 0);
   begin
       for i in 0 to 3 loop
          case str(i+1) is
             when '0'=> tmp := "0000";
             when '1'=> tmp := "0001";
             when '2'=> tmp := "0010";
             when '3'=> tmp := "0011";
             when '4'=> tmp := "0100";
             when '5'=> tmp := "0101";
             when '6'=> tmp := "0110";
             when '7'=> tmp := "0111";
             when '8'=> tmp := "1000";
             when '9'=> tmp := "1001";
             when 'A'=> tmp := "1010";
             when 'B'=> tmp := "1011";
             when 'C'=> tmp := "1100";
             when 'D'=> tmp := "1101";
             when 'E'=> tmp := "1110";
             when 'F'=> tmp := "1111";
             when others =>  tmp := "XXXX";
           end case;
           vec(4*i+3 downto 4*i) := tmp;
       end loop;
       return(vec);
   end STR4_2VEC;

   type state_type is (
      s_reset,
      s_exec,
      s_write,
      s_read,
      s_fetch,
      s_busarb
   );
 
   -- State vector declaration
   attribute state_vector : string;
   attribute state_vector of fsm : architecture is "current_state";

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
            current_state <= s_reset;
            -- Default Reset Values
            next_cmd <= '0';
         else
            current_state <= next_state;

            -- Combined Actions
            case current_state is
               when s_exec => 
                  timeout_cnt <= 0;
               when s_write => 
                  timeout_cnt <= timeout_cnt+1;
               when s_read => 
                  timeout_cnt <= timeout_cnt+1;
               when s_fetch => 
                  if (halt = '0' and stop = '0') then 
                     next_cmd <= not next_cmd;
                  end if;
               when others =>
                  null;
            end case;
         end if;
      end if;
   end process clocked_proc;
 
   -----------------------------------------------------------------
   nextstate_proc : process ( 
      bus_ack,
      bus_grant,
      current_state,
      halt,
      rnw,
      stop,
      timeout_cnt
   )
   -----------------------------------------------------------------
   begin
      case current_state is
         when s_reset => 
            next_state <= s_fetch;
         when s_exec => 
            if (rnw = '0') then 
               next_state <= s_write;
            else
               next_state <= s_read;
            end if;
         when s_write => 
            if (bus_ack = '1' or timeout_cnt = 100) then 
               next_state <= s_fetch;
            else
               next_state <= s_write;
            end if;
         when s_read => 
            if (bus_ack = '1' or timeout_cnt = 100) then 
               next_state <= s_fetch;
            else
               next_state <= s_read;
            end if;
         when s_fetch => 
            if (halt = '0' and stop = '0') then 
               next_state <= s_busarb;
            else
               next_state <= s_fetch;
            end if;
         when s_busarb => 
            if (stop = '1' or halt = '1') then 
               next_state <= s_fetch;
            elsif (bus_grant = '1') then 
               next_state <= s_exec;
            else
               next_state <= s_busarb;
            end if;
         when others =>
            next_state <= s_reset;
      end case;
   end process nextstate_proc;
 
   -----------------------------------------------------------------
   output_proc : process ( 
      current_state
   )
   -----------------------------------------------------------------
   begin
      -- Default Assignment
      bus_we <= '0';
      bus_rd <= '0';
      bus_request <= '1';
      -- Default Assignment To Internals
      data_en <= '1';

      -- Combined Actions
      case current_state is
         when s_reset => 
            bus_request <= '0';
            data_en <= '0';
         when s_write => 
            bus_we <= '1';
         when s_read => 
            bus_rd <= '1';
         when s_fetch => 
            bus_request <= '0';
            data_en <= '0';
         when s_busarb => 
            data_en <= '0';
         when others =>
            null;
      end case;
   end process output_proc;
 
   -- Concurrent Statements
   -- synthesis translate_off
   
   --- read filename-------------------------
      --read_fname:process
      -- file textfile:   text is in "tb_fileselect.txt";
      -- variable l: line;
       --variable fname:  string(1 to 32);
       --begin
       --     readline(textfile, l);
        --    read(l, fname);
       --    tb_filename <= fname;
      --    wait;
   
     --  end process read_fname;
   ------------------------------------------------------------------------------
   ---Read Command File
   ------------------------------------------------------------------------------
   
       readcmd:process
       file textfile:   text is in COMMANDS;
       variable l: line;
       variable cmd:  string(1 to 4);
       variable address: string(1 to 4);
       variable data: string(1 to 8);
       variable num: integer;
       variable separator: character;
       variable timestamp_v, waittime_v: time;
       begin
      wait for 1 ns;
          while not endfile(textfile) loop
             wait until next_cmd'event;  
            readline(textfile, l);
            read(l, cmd);
            case cmd is
               when "MEMW" =>    read(l,separator);
                                 read(l,address);
                                 read(l,separator);
                                 read(l,data);
                                 bus_address_int <= STR4_2VEC(address);
                                 bus_data_int <= STR8_2VEC(data); 
                                 rnw <= '0';
                 when "MEMR" =>  read(l,separator);
                                 read(l,address);
                                 bus_address_int <= STR4_2VEC(address);
                                 rnw <= '1';
                 when "TIME" =>  read(l,separator);
                                 read(l,timestamp_v);
                                waittime_v := timestamp_v - now;
                                halt <= '1';
                                wait for waittime_v;  
                                halt <= '0';
    
   
                when others =>   assert false report "Unrecognised Instruction"
                                 severity failure;
            end case;                    
         
         end loop;
         stop <= '1';
         assert false report "Simulation complete" severity note;
   
         wait;
   
       end process readcmd;
   
   -- assign internal signals to output ports ---
   bus_addr <= bus_address_int(bus_addr'range) when data_en = '1' else (others => '0');
    
   bus_dout <= bus_data_int(bus_dout'range) when data_en = '1' else (others => '0');
   
   eof <= not stop;
   
   -- synthesis translate_on
end fsm;