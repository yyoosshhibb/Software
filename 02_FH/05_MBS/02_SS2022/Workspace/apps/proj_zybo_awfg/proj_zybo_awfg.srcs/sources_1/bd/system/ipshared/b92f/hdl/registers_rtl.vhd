
-- 
--
-- VHDL Architecture sdi_hdsd_tx.register_array.rtl
--
-- Created:
--          by  C. Netzberger (KPROJR2611)
--          FH JOANNEUM
--          Werk-VI Str. 46 /Kapfenberg / Austria
--          at - 10:02:43 20.07.2006
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2005.1 (Build 83)
--
-- 
library ieee;
use ieee.std_logic_1164.ALL;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_unsigned.ALL;
library work;
use work.utilities.all;

--$identifier
--$ID reg
--$entity
entity registers is
   generic( 
      addr_width_g : integer := 16;      --width of address
      data_width_g : integer := 32;      --width of data
      addr_base_g  : std_logic_vector;
      addr_range_g : std_logic_vector;
--$nregs_g
      nregs_g      : integer := 16
   );
   port( 
      sbus_addr              : in     std_logic_vector (15 downto 0);
      sbus_be                : in     std_logic_vector (3 downto 0);
      sbus_rd                : in     std_logic;
      sbus_wdata             : in     std_logic_vector (31 downto 0);
      sbus_we                : in     std_logic;
      sbus_ack               : out    std_logic;
      sbus_rdata             : out    std_logic_vector (31 downto 0);
      sbus_i_mst             : out    sbus_i_t;
      sbus_o_mst             : in     sbus_o_t;
      sbus_o_null            : out    sbus_o_t;
---$portsignals
      cc_addr                :out    std_logic_vector(31 downto 0);
      cc_write               :out    std_logic;
      c0                     :out    std_logic_vector(31 downto 0);
      c1                     :out    std_logic_vector(31 downto 0);
      c2                     :out    std_logic_vector(31 downto 0);
      c3                     :out    std_logic_vector(31 downto 0);
      m                      :out    std_logic_vector(31 downto 0);
      tper_cnt               :out    std_logic_vector(31 downto 0);
      reset_hdl              :out    std_logic_vector(31 downto 0);
      frequency_o            :out    std_logic_vector(31 downto 0);
      amplitude_o            :out    std_logic_vector(31 downto 0);
      buttons                :in     std_logic_vector(3 downto 0);
      sliders                :in     std_logic_vector(3 downto 0);
      pmod_o                 :out    std_logic_vector(7 downto 0);
      amplitude              :in     std_logic_vector(31 downto 0);
      frequency              :in     std_logic_vector(31 downto 0);
      leds                   :out    std_logic_vector(3 downto 0);
--$end_portsignals
      reset    : in     std_logic;                                             -- synchronous, active high reset
      clk      : in     std_logic                                              -- register clock
   );

-- Declarations
--$end_entity
end entity registers;

--$architecture  
architecture rtl of registers is

-------------------------------------------------------------------------------
-- Function log2 -- returns number of bits needed to encode x choices
--   x = 0  returns 0
--   x = 1  returns 0
--   x = 2  returns 1
--   x = 4  returns 2, etc.
-------------------------------------------------------------------------------
--
function log2(x : natural) return integer is
  variable i  : integer := 0; 
  variable val: integer := 1;
begin 
  if x = 0 then return 0;
  else
    for j in 0 to 29 loop -- for loop for XST 
      if val >= x then null; 
      else
        i := i+1;
        val := val*2;
      end if;
    end loop;
    assert val >= x
      report "Function log2 received argument larger" &
             " than its capability of 2^30. "
      severity failure;
    return i;
  end if;  
end function log2; 

signal bus_addr :     std_logic_vector (addr_width_g-1 downto 0);            -- register address
signal reg_addr :     std_logic_vector (log2(nregs_g)-1 downto 0);            -- register address
signal bus_cs   :     std_logic;                                             -- chip select, active high
signal bus_din  :     std_logic_vector (data_width_g-1 downto 0);            -- bus input data
signal bus_be   :     std_logic_vector (data_width_g/8-1 downto 0);            -- byte enable, active high
signal bus_we   :     std_logic;                                             -- write enable, active high
signal bus_rd   :     std_logic;                                             -- write enable, active high
signal bus_we_q :     std_logic;                                             
signal bus_rd_q :     std_logic;                                             
signal bus_dout :     std_logic_vector (data_width_g-1 downto 0);            -- bus output data
signal bus_ack  :     std_logic;

signal reg: std_logic_vector(nregs_g*data_width_g - 1 downto 0);
signal update_int: std_logic := '0';
signal rd_tmp, rd_q: std_logic_vector ( nregs_g-1 downto 0);  
signal resetval :     std_logic_vector ( nregs_g*data_width_g-1 downto 0 );
signal reg_din  :     std_logic_vector ( nregs_g*data_width_g-1 downto 0 );  -- parallel input for readback
signal reg_dout :     std_logic_vector ( nregs_g*data_width_g-1 downto 0 );  -- parallel output of all registers
signal we       :     std_logic_vector ( nregs_g-1 downto 0);                -- active high write strobes
signal rd       :     std_logic_vector ( nregs_g-1 downto 0);                -- active high read strobes
signal update   :     std_logic;

--$regsignals
signal reg00:      std_logic_vector(31 downto 0);
signal reg00_in:   std_logic_vector(31 downto 0);
signal reg00_def:  std_logic_vector(31 downto 0);
signal reg01:      std_logic_vector(31 downto 0);
signal reg01_in:   std_logic_vector(31 downto 0);
signal reg01_def:  std_logic_vector(31 downto 0);
signal reg02:      std_logic_vector(31 downto 0);
signal reg02_in:   std_logic_vector(31 downto 0);
signal reg02_def:  std_logic_vector(31 downto 0);
signal reg03:      std_logic_vector(31 downto 0);
signal reg03_in:   std_logic_vector(31 downto 0);
signal reg03_def:  std_logic_vector(31 downto 0);
signal reg04:      std_logic_vector(31 downto 0);
signal reg04_in:   std_logic_vector(31 downto 0);
signal reg04_def:  std_logic_vector(31 downto 0);
signal reg05:      std_logic_vector(31 downto 0);
signal reg05_in:   std_logic_vector(31 downto 0);
signal reg05_def:  std_logic_vector(31 downto 0);
signal reg06:      std_logic_vector(31 downto 0);
signal reg06_in:   std_logic_vector(31 downto 0);
signal reg06_def:  std_logic_vector(31 downto 0);
signal reg07:      std_logic_vector(31 downto 0);
signal reg07_in:   std_logic_vector(31 downto 0);
signal reg07_def:  std_logic_vector(31 downto 0);
signal reg08:      std_logic_vector(31 downto 0);
signal reg08_in:   std_logic_vector(31 downto 0);
signal reg08_def:  std_logic_vector(31 downto 0);
signal reg09:      std_logic_vector(31 downto 0);
signal reg09_in:   std_logic_vector(31 downto 0);
signal reg09_def:  std_logic_vector(31 downto 0);
signal reg0A:      std_logic_vector(31 downto 0);
signal reg0A_in:   std_logic_vector(31 downto 0);
signal reg0A_def:  std_logic_vector(31 downto 0);
signal reg0B:      std_logic_vector(31 downto 0);
signal reg0B_in:   std_logic_vector(31 downto 0);
signal reg0B_def:  std_logic_vector(31 downto 0);
signal reg0C:      std_logic_vector(31 downto 0);
signal reg0C_in:   std_logic_vector(31 downto 0);
signal reg0C_def:  std_logic_vector(31 downto 0);
signal reg0D:      std_logic_vector(31 downto 0);
signal reg0D_in:   std_logic_vector(31 downto 0);
signal reg0D_def:  std_logic_vector(31 downto 0);
signal reg0E:      std_logic_vector(31 downto 0);
signal reg0E_in:   std_logic_vector(31 downto 0);
signal reg0E_def:  std_logic_vector(31 downto 0);
signal reg0F:      std_logic_vector(31 downto 0);
signal reg0F_in:   std_logic_vector(31 downto 0);
signal reg0F_def:  std_logic_vector(31 downto 0);
--$end_regsignals

begin
  
  -- sbus multiplexer -----
  sbus_i_mst.addr  <= sbus_addr;
  sbus_i_mst.wdata <= sbus_wdata;
  sbus_i_mst.we    <= sbus_we;
  sbus_i_mst.be    <= sbus_be;
  sbus_i_mst.rd    <= sbus_rd;

  process(clk)
  begin
    if rising_edge(clk) then
      sbus_rdata  <= sbus_o_mst.rdata or bus_dout;
      sbus_ack    <= sbus_o_mst.ack   or bus_ack;
      sbus_o_null <= sbus_o_null_c; 
    end if;
  end process;

  -- connect to slave bus --
  bus_addr    <= sbus_addr(bus_addr'range);
  reg_addr    <= sbus_addr(reg_addr'range);
  bus_din     <= sbus_wdata(bus_din'range);
  bus_be      <= sbus_be;
  bus_we      <= sbus_we;
  bus_rd      <= sbus_rd;
  -- out
  --sbus_rdata  <= bus_dout;
  --sbus_ack    <= bus_ack;
  
  -- addr decoder
  bus_cs <= '1' when bus_addr >= addr_base_g and bus_addr < (addr_base_g + addr_range_g) else '0';
 
  -- delay bus_we, bus_rd
  process(clk)
  begin
     if clk ='1' and clk'event then
        bus_we_q <= bus_we;
        bus_rd_q <= bus_rd;
     end  if;
  end process; 
 
  --- Write to Register Array ----------------------------------------------------------------
  process(clk)
  begin
     if clk ='1' and clk'event then
       we <= (others => '0'); 
        for i in 0 to nregs_g-1 loop
           if reset = '1' then
              reg((i+1)*data_width_g-1 downto i*data_width_g) <= resetval((i+1)*data_width_g-1 downto i*data_width_g);
           elsif reg_addr = i and bus_cs = '1' and bus_we = '1' and bus_we_q = '0' then
--              reg((i+1)*data_width_g-1 downto i*data_width_g) <= bus_din;
              for k in bus_be'range loop --byte access
                reg(i*data_width_g+7+ k*8 downto i*data_width_g +k*8) <= bus_din(7 + k*8 downto k*8);
              end loop;
              we(i) <= '1';
           end if;
       end loop;
     end  if;
  end process; 

  -- indicate register write by toggling the "update" signal
  process(clk)
    variable q: std_logic;
  begin
     if clk ='1' and clk'event then
       if bus_we = '1' and q = '0' and bus_cs = '1' then -- consider rising bus_we only
         update_int <= not update_int;
       end if;
       q := bus_we;
     end  if;
  end process; 
  update <= update_int;
  
  --Read from Register Array--------------------
  process(reg, bus_addr, bus_cs,bus_rd,reg_din)
  begin
     bus_dout <= (others => '0');
     rd_tmp  <=  (others => '0');
     for i in 0 to nregs_g-1 loop
        if reg_addr = i and bus_cs = '1'  then
             bus_dout <= reg_din((i+1)*data_width_g-1 downto i*data_width_g);
             rd_tmp(i) <= bus_rd;
        end if;
     end loop;
  end process;

  ---register read strobes--------------------
  process(clk)
  begin
     if clk ='1' and clk'event then
       if reset = '1' then
         rd_q <= (others => '0');
       else
         rd_q <= rd_tmp;
       end if;
     end  if;
  end process; 
  rd <=  rd_tmp and not rd_q;
  
  reg_dout <= reg; 
  
  bus_ack <= bus_cs and (bus_we or bus_rd);

   --slice registers from vector---------------
--$regslices
 reg00 <= reg_dout(31 downto 0);
 reg01 <= reg_dout(63 downto 32);
 reg02 <= reg_dout(95 downto 64);
 reg03 <= reg_dout(127 downto 96);
 reg04 <= reg_dout(159 downto 128);
 reg05 <= reg_dout(191 downto 160);
 reg06 <= reg_dout(223 downto 192);
 reg07 <= reg_dout(255 downto 224);
 reg08 <= reg_dout(287 downto 256);
 reg09 <= reg_dout(319 downto 288);
 reg0A <= reg_dout(351 downto 320);
 reg0B <= reg_dout(383 downto 352);
 reg0C <= reg_dout(415 downto 384);
 reg0D <= reg_dout(447 downto 416);
 reg0E <= reg_dout(479 downto 448);
 reg0F <= reg_dout(511 downto 480);
--$end_regslices

--$default_values
 reg00_def <= X"00000000";
 reg01_def <= X"00000000";
 reg02_def <= X"00000000";
 reg03_def <= X"00000000";
 reg04_def <= X"00000000";
 reg05_def <= X"00000000";
 reg06_def <= X"00000000";
 reg07_def <= X"00000000";
 reg08_def <= X"00000000";
 reg09_def <= X"00000000";
 reg0A_def <= X"00000000";
 reg0B_def <= X"00000000";
 reg0C_def <= X"00000000";
 reg0D_def <= X"00000000";
 reg0E_def <= X"00000000";
 reg0F_def <= X"00000006";
 resetval( 31 downto   0) <= reg00_def;
 resetval( 63 downto  32) <= reg01_def;
 resetval( 95 downto  64) <= reg02_def;
 resetval(127 downto  96) <= reg03_def;
 resetval(159 downto 128) <= reg04_def;
 resetval(191 downto 160) <= reg05_def;
 resetval(223 downto 192) <= reg06_def;
 resetval(255 downto 224) <= reg07_def;
 resetval(287 downto 256) <= reg08_def;
 resetval(319 downto 288) <= reg09_def;
 resetval(351 downto 320) <= reg0A_def;
 resetval(383 downto 352) <= reg0B_def;
 resetval(415 downto 384) <= reg0C_def;
 resetval(447 downto 416) <= reg0D_def;
 resetval(479 downto 448) <= reg0E_def;
 resetval(511 downto 480) <= reg0F_def;
--$end_default_values

--$readback_regs
process(clk)
begin
   if rising_edge(clk) then
         -- default assignment: internal register readback----------
        reg_din <= reg_dout;
          --external readback registers-----
        reg_din(355 downto 352) <= buttons;
        reg_din(359 downto 356) <= sliders;
        reg_din(447 downto 416) <= amplitude;
        reg_din(479 downto 448) <= frequency;
    end if;
end process;

--rd_regs_on
reg0B_in( 3 downto  0) <= buttons;--
reg0B_in( 7 downto  4) <= sliders;--
reg0D_in(31 downto  0) <= amplitude;--
reg0E_in(31 downto  0) <= frequency;--
--rd_regs_off

--wr_regs_on
cc_addr              <= reg00(31 downto  0);--comment
cc_write             <= reg01(0);--
c0                   <= reg02(31 downto  0);--
c1                   <= reg03(31 downto  0);--
c2                   <= reg04(31 downto  0);--
c3                   <= reg05(31 downto  0);--
m                    <= reg06(31 downto  0);--
tper_cnt             <= reg07(31 downto  0);--
reset_hdl            <= reg08(31 downto  0);--
frequency_o          <= reg09(31 downto  0);--
amplitude_o          <= reg0A(31 downto  0);--...
pmod_o               <= reg0C( 7 downto  0);--
leds                 <= reg0F( 3 downto  0);--
--wr_regs_off
   
  
end architecture rtl;
