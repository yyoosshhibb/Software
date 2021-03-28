-- VHDL Entity common_lib.TopLevelEncoder.symbol
--
-- Created:
--          by - bauerjoh17.UNKNOWN (R00717)
--          at - 10:22:15 11/13/2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

entity TopLevelEncoder is
   port( 
      ina : in     std_logic_vector (1 downto 0);
      inb : in     std_logic_vector (1 downto 0);
      cnt : out    std_logic_vector (3 downto 0)
   );

-- Declarations

end TopLevelEncoder ;

--
-- VHDL Architecture common_lib.TopLevelEncoder.struct
--
-- Created:
--          by - bauerjoh17.UNKNOWN (R00717)
--          at - 10:22:46 11/13/2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

library common_lib;

architecture struct of TopLevelEncoder is

   -- Architecture declarations

   -- Internal signal declarations


   -- Component Declarations
   component Encoder
   port (
      ina : in     std_logic_vector (1 downto 0);
      inb : in     std_logic_vector (1 downto 0);
      cnt : out    std_logic_vector (3 downto 0)
   );
   end component;

   -- Optional embedded configurations
   -- pragma synthesis_off
   for all : Encoder use entity common_lib.Encoder;
   -- pragma synthesis_on


begin

   -- Instance port mappings.
   U_0 : Encoder
      port map (
         ina => ina,
         inb => inb,
         cnt => cnt
      );

end struct;