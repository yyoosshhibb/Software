-- VHDL Entity common_lib.connectionEncoderLEDs.symbol
--
-- Created:
--          by - Yoshi.UNKNOWN (YOSHIS-LAPTOP)
--          at - 12:25:04 27.10.2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

entity connectionEncoderLEDs is
   port( 
      inA1  : in     std_logic;
      inA2  : in     std_logic;
      inB1  : in     std_logic;
      inB2  : in     std_logic;
      outA1 : out    std_logic;
      outA2 : out    std_logic;
      outB1 : out    std_logic;
      outB2 : out    std_logic
   );

-- Declarations

end connectionEncoderLEDs ;

--
-- VHDL Architecture common_lib.connectionEncoderLEDs.struct
--
-- Created:
--          by - Yoshi.UNKNOWN (YOSHIS-LAPTOP)
--          at - 12:25:04 27.10.2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

library common_lib;

architecture struct of connectionEncoderLEDs is

   -- Architecture declarations

   -- Internal signal declarations


   -- Component Declarations
   component Connection
   port (
      inA1  : in     std_logic;
      inA2  : in     std_logic;
      inB1  : in     std_logic;
      inB2  : in     std_logic;
      outA1 : out    std_logic;
      outA2 : out    std_logic;
      outB1 : out    std_logic;
      outB2 : out    std_logic
   );
   end component;

   -- Optional embedded configurations
   -- pragma synthesis_off
   for all : Connection use entity common_lib.Connection;
   -- pragma synthesis_on


begin

   -- Instance port mappings.
   U_0 : Connection
      port map (
         inA1  => inA1,
         inA2  => inA2,
         inB1  => inB1,
         inB2  => inB2,
         outA1 => outA1,
         outA2 => outA2,
         outB1 => outB1,
         outB2 => outB2
      );

end struct;
