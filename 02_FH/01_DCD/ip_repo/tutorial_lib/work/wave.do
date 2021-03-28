onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_top_counter/buttons
add wave -noupdate /tb_top_counter/clk
add wave -noupdate /tb_top_counter/leds
add wave -noupdate /tb_top_counter/sliders
add wave -noupdate /tb_top_counter/U_0/U_0/clk
add wave -noupdate /tb_top_counter/U_0/U_0/reset
add wave -noupdate /tb_top_counter/U_0/U_0/enable
add wave -noupdate /tb_top_counter/U_0/U_0/dir
add wave -noupdate -format Analog-Step -height 74 -max 799.99999999999989 -min -1000.0 -radix decimal /tb_top_counter/U_0/U_0/cnt
add wave -noupdate /tb_top_counter/U_0/dir
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {11955 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ns} {20813 ns}
