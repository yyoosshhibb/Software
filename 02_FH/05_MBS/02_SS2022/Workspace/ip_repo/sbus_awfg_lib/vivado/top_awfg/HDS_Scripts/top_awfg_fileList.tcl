set hdsFileList [list]
set ipFileList [list]
array set hdsFileDialectsArray [list]
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/FPGA_pkg.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/FPGA_pkg.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/SinglePortRAM_generic.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/SinglePortRAM_generic.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/Coeff_Memory.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/Coeff_Memory.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/frequency_to_fcw.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/frequency_to_fcw.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/NCO.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/NCO.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/time_generator.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/time_generator.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/FPGA.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/FPGA.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/busdef_pkg.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/busdef_pkg.vhd") "VHDL_2008"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/busdef_pkg_body.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/busdef_pkg_body.vhd") "VHDL_2008"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/registers_rtl.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/registers_rtl.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/dac_ctrl_fsm.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/dac_ctrl_fsm.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/comp_signal_debounce_rtl.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/comp_signal_debounce_rtl.vhd") "VHDL_2008"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/cnt_modulus_rtl.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/cnt_modulus_rtl.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/bus_bridge_16_fsm.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/bus_bridge_16_fsm.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_rx_fsm.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_rx_fsm.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_tx_fsm.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_tx_fsm.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_top_struct.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_top_struct.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/buscmd_b16_filesel_fsm.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/buscmd_b16_filesel_fsm.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_bridge_32_struct.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_bridge_32_struct.vhd") "VHDL_ANY"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_regs_rtl.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/uart_regs_rtl.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/comp_timer_rtl.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/comp_timer_rtl.vhd") "VHDL_93"
lappend hdsFileList sbus_awfg_lib
lappend hdsFileList "$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/top_awfg_struct.vhd"
set hdsFileDialectsArray("$::env(HDS_PROJECT_DIR)/sbus_awfg_lib/hdl/top_awfg_struct.vhd") "VHDL_93"
set vlogGlobalFileList [list]
