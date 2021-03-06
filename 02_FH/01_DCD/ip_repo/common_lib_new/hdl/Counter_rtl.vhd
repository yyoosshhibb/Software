--
-- VHDL Architecture common_lib_new.Counter.rtl
--
-- Created:
--          by - Yoshi.UNKNOWN (YOSHIS-LAPTOP)
--          at - 12:18:25 23.03.2021
--
-- using Mentor Graphics HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
USE ieee.std_logic_unsigned.all;

entity Counter is
   generic( 
      nbits_g : integer := 4
   );
   port( 
      inc     : in     std_logic;
      dec     : in     std_logic;
      clk     : in     std_logic;
      reset   : in     std_logic;
      count : out    std_logic_vector (nbits_g-1 downto 0)
   );

-- Declarations

end Counter ;

--
architecture rtl of Counter is
  signal cnt: std_logic_vector(count'range) := (others => '0');
begin
  process(clk)
  begin
    if rising_edge(clk) then
      if reset then
        cnt <= (others => '0');
      elsif inc then
        cnt <= cnt + '1';
      elsif dec then
        cnt <= cnt - '1';
      end if;
    end if;
  end process;
  
  count <= cnt;
end architecture rtl;

