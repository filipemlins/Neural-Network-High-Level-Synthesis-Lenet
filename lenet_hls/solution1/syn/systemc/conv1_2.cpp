#include "conv1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_21813_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        col_offset_reg_21760 = col_offset_2_reg_29262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21871_p2.read()))) {
        col_offset_reg_21760 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && 
         esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_1))) {
        filter_reg_21689 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_21842_p2.read()))) {
        filter_reg_21689 = filter_2_reg_29200.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_21701 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
                (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24054_p2.read()) || 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_66_reg_29237.read())))) {
        i_reg_21701 = i_12_reg_29223.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(conv1_out_V_full_n.read(), ap_const_logic_1))) {
        j_reg_21713 = tmp_67_reg_29232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_21842_p2.read()))) {
        j_reg_21713 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        k_reg_21678 = k_4_reg_29189.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        k_reg_21678 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21854_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_66_fu_21866_p2.read()))) {
        p1_reg_21771 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
                !(esl_seteq<1,1,1>(tmp_52_reg_29317.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        p1_reg_21771 = p_reg_29312.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21918_p2.read()))) {
        row_offset_reg_21737 = row_offset_2_reg_29244.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_21854_p2.read()))) {
        row_offset_reg_21737 = ap_const_lv3_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21918_p2.read()))) {
        sum_3_reg_21725 = sum_4_reg_21748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_21854_p2.read()))) {
        sum_3_reg_21725 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        sum_4_reg_21748 = grp_fu_21782_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21871_p2.read()))) {
        sum_4_reg_21748 = sum_3_reg_21725.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        a_assign_reg_29297 = grp_fu_21782_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        col_offset_2_reg_29262 = col_offset_2_fu_21924_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv1_layer_bias_loa_reg_29215 = conv1_layer_bias_q0.read();
        tmp_83_cast_reg_29210 = tmp_83_cast_fu_21838_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_layer_weights_2_reg_29282 = conv1_layer_weights_s_q0.read();
        tmp_78_reg_29277 = tmp_78_fu_21953_p1026.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        filter_2_reg_29200 = filter_2_fu_21819_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_12_reg_29223 = i_12_fu_21848_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        k_4_reg_29189 = k_4_fu_21803_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_66_reg_29237.read()))) {
        p_reg_29312 = p_fu_24060_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        row_offset_2_reg_29244 = row_offset_2_fu_21877_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_21918_p2.read()))) {
        t1_0_t_reg_29272 = t1_0_t_fu_21948_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_66_reg_29237.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_24054_p2.read()))) {
        tmp_52_reg_29317 =  (sc_lv<1>) (in_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21871_p2.read()))) {
        tmp_61_reg_29254 = tmp_61_fu_21910_p3.read();
        tmp_87_cast_reg_29249 = tmp_87_cast_fu_21902_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21854_p2.read()))) {
        tmp_66_reg_29237 = tmp_66_fu_21866_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        tmp_67_reg_29232 = tmp_67_fu_21860_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        tmp_71_reg_29287 = grp_fu_21788_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        tmp_83_reg_29304 = tmp_83_fu_24047_p3.read();
    }
}

void conv1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(exitcond8_fu_21797_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_21813_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_21842_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21854_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21871_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21918_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(conv1_out_V_full_n.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        case 33554432 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24054_p2.read()) || 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_66_reg_29237.read())))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && !(esl_seteq<1,1,1>(tmp_52_reg_29317.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<27>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

