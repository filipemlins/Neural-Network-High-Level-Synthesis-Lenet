
set TopModule "lenet_hls"
set ClockPeriod 10
set ClockList ap_clk
set HasVivadoClockPeriod 0
set CombLogicFlag 0
set PipelineFlag 1
set DataflowTaskPipelineFlag 1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NbRWValue 1
set intNbAccess 1
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 1
set ResetStyle control
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set FsmEncStyle onehot
set MaxFanout 0
set RtlPrefix {}
set ExtraCCFlags {}
set ExtraCLdFlags {}
set SynCheckOptions {}
set PresynOptions {}
set PreprocOptions {}
set SchedOptions {}
set BindOptions {}
set RtlGenOptions {}
set RtlWriterOptions {}
set CbcGenFlag {}
set CasGenFlag {}
set CasMonitorFlag {}
set AutoSimOptions {}
set ExportMCPathFlag 0
set SCTraceFileName mytrace
set SCTraceFileFormat vcd
set SCTraceOption all
set TargetInfo xc7z007s:clg225:-1
set SourceFiles {sc {} c {../pool_layers.cpp ../lenet_hls.cpp ../full_connected.cpp ../conv_layers.cpp ../activations.cpp}}
set SourceFlags {sc {} c {{} {} {} {} {}}}
set DirectiveFile /home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet/lenet_hls/solution1/solution1.directive
set TBFiles {verilog {../headers/lenet_hls_test.h ../lenet_hls_test.cpp} bc {../headers/lenet_hls_test.h ../lenet_hls_test.cpp} sc {../headers/lenet_hls_test.h ../lenet_hls_test.cpp} vhdl {../headers/lenet_hls_test.h ../lenet_hls_test.cpp} c {} cas {../headers/lenet_hls_test.h ../lenet_hls_test.cpp}}
set SpecLanguage C
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set TBInstNames {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set TBTVFileNotFound {}
set AppFile ../vivado_hls.app
set ApsFile solution1.aps
set AvePath ../..
set DefaultPlatform DefaultPlatform
set multiClockList {}
set SCPortClockMap {}
set intNbAccess 1
set PlatformFiles {{DefaultPlatform {xilinx/zynq/zynq xilinx/zynq/zynq_fpv6}}}
set HPFPO 0
