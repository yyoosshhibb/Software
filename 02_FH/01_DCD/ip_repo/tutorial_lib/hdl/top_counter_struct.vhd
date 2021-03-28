-- VHDL Entity tutorial_lib.top_counter.symbol
--
-- Created:
--          by - bauerjoh17.UNKNOWN (R00717)
--          at - 10:09:25 10/ 8/2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

entity top_counter is
   port( 
      buttons : in     std_logic_vector (3 downto 0);
      clk     : in     std_logic;
      sliders : in     std_logic_vector (3 downto 0);
      leds    : out    std_logic_vector (3 downto 0)
   );

-- Declarations

end top_counter ;

--
-- VHDL Architecture tutorial_lib.top_counter.struct
--
-- Created:
--          by - bauerjoh17.UNKNOWN (R00717)
--          at - 10:09:25 10/ 8/2020
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2017.1a (Build 5)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

library tutorial_lib;

architecture struct of top_counter is

   -- Architecture declarations

   -- Internal signal declarations
   signal cnt    : std_logic_vector(31 downto 0);
   signal dir    : std_logic;
   signal enable : std_logic;
   signal reset  : std_logic;


   -- Component Declarations
   component binary_counter
   generic (
      nbits_g : integer := 8
   );
   port (
      clk    : in     std_logic ;
      reset  : in     std_logic ;
      enable : in     std_logic ;
      dir    : in     std_logic ;
      cnt    : out    std_logic_vector (nbits_g-1 downto 0)
   );
   end component;

   -- Optional embedded configurations
   -- pragma synthesis_off
   for all : binary_counter use entity tutorial_lib.binary_counter;
   -- pragma synthesis_on


begin
   -- Architecture concurrent statements
   -- HDL Embedded Text Block 1 eb1
   leds <= cnt(28 downto 25);                       

   -- HDL Embedded Text Block 2 eb2
   reset <= sliders(0);
   enable <= sliders(1);
   dir <= sliders(2);                 


   -- Instance port mappings.
   U_0 : binary_counter
      generic map (
         nbits_g => 32
      )
      port map (
         clk    => clk,
         reset  => reset,
         enable => enable,
         dir    => dir,
         cnt    => cnt
      );

end struct;