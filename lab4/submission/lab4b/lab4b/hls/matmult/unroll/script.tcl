############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project matmult
set_top matmult
add_files ../../src_4b/matmult.c
add_files ../../src_4b/matmult.h
add_files -tb ../../src_4b/tb_matmult.c
open_solution "unroll"
set_part {xq7a200trs484-2I}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
source "./matmult/unroll/directives.tcl"
csim_design
csynth_design
cosim_design -disable_deadlock_detect -tool xsim
export_design -rtl verilog -format ip_catalog
