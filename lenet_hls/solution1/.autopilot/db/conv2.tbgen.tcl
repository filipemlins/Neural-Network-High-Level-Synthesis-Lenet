set moduleName conv2
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {conv2}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv2_out_V_V int 16 regular {fifo 1 volatile }  }
	{ in_V_V int 16 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv2_out_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "in_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ conv2_out_V_V_din sc_out sc_lv 16 signal 0 } 
	{ conv2_out_V_V_full_n sc_in sc_logic 1 signal 0 } 
	{ conv2_out_V_V_write sc_out sc_logic 1 signal 0 } 
	{ in_V_V_dout sc_in sc_lv 16 signal 1 } 
	{ in_V_V_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_V_V_read sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "conv2_out_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv2_out_V_V", "role": "din" }} , 
 	{ "name": "conv2_out_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2_out_V_V", "role": "full_n" }} , 
 	{ "name": "conv2_out_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2_out_V_V", "role": "write" }} , 
 	{ "name": "in_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_V_V", "role": "dout" }} , 
 	{ "name": "in_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "empty_n" }} , 
 	{ "name": "in_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_V_V", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "321106", "EstimateLatencyMax" : "321106",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv2_out_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "conv2_out_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "in_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "conv2_layer_bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv2_layer_weights_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_layer_bias_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_layer_weights_s_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_buff_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_hls_fpext_32ns_64_1_1_U16", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_hls_fcmp_32ns_32ns_1_1_1_U17", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_hls_mac_muladd_11s_16s_27ns_27_1_1_U18", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv2 {
		conv2_out_V_V {Type O LastRead -1 FirstWrite 14}
		in_V_V {Type I LastRead 1 FirstWrite -1}
		conv2_layer_bias_V {Type I LastRead -1 FirstWrite -1}
		conv2_layer_weights_s {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "321106", "Max" : "321106"}
	, {"Name" : "Interval", "Min" : "321106", "Max" : "321106"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv2_out_V_V { ap_fifo {  { conv2_out_V_V_din fifo_data 1 16 }  { conv2_out_V_V_full_n fifo_status 0 1 }  { conv2_out_V_V_write fifo_update 1 1 } } }
	in_V_V { ap_fifo {  { in_V_V_dout fifo_data 0 16 }  { in_V_V_empty_n fifo_status 0 1 }  { in_V_V_read fifo_update 1 1 } } }
}
