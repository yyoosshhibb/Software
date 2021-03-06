--
-- VHDL Architecture common_lib_new.SquareGen.rtl
--
-- Created:
--          by - Yoshi.UNKNOWN (YOSHIS-LAPTOP)
--          at - 15:34:25 23.03.2021
--
-- using Mentor Graphics HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;


entity SquareGen is
  generic(
      scaler: integer := 62500
    );
   port( 
      active : in     std_logic;
      outH   : out    std_logic;
      outL   : out    std_logic;
      clk    : in     std_logic
   );

-- Declarations

end SquareGen ;

--
architecture rtl of SquareGen is
  signal count : std_logic_vector (15 downto 0) := (others => '0');
  signal output : std_logic :='1';
begin
  process(clk)
  begin
    if rising_edge(clk) then
      if active then
        if(count = scaler) then
          count <= (others => '0');
          output <= not output;
        else
          count <= count + '1';
        end if;
      end if;
    end if;
  end process;
outH <= output;
outL <= not output;
          
end architecture rtl;

