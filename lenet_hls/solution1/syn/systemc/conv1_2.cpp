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
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_21803_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        col_offset_reg_21750 = col_offset_2_reg_29211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21861_p2.read()))) {
        col_offset_reg_21750 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && 
         esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_1))) {
        filter_reg_21679 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_21832_p2.read()))) {
        filter_reg_21679 = filter_2_reg_29149.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_21691 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
                (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24003_p2.read()) || 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_64_reg_29186.read())))) {
        i_reg_21691 = i_12_reg_29172.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(conv1_out_V_full_n.read(), ap_const_logic_1))) {
        j_reg_21703 = tmp_65_reg_29181.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_21832_p2.read()))) {
        j_reg_21703 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        k_reg_21668 = k_4_reg_29138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        k_reg_21668 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21844_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_64_fu_21856_p2.read()))) {
        p1_reg_21761 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
                !(esl_seteq<1,1,1>(tmp_51_reg_29265.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        p1_reg_21761 = p_reg_29260.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21908_p2.read()))) {
        row_offset_reg_21727 = row_offset_2_reg_29193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_21844_p2.read()))) {
        row_offset_reg_21727 = ap_const_lv3_0;
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
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21908_p2.read()))) {
        sum_3_reg_21715 = sum_4_reg_21738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_21844_p2.read()))) {
        sum_3_reg_21715 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        sum_4_reg_21738 = grp_fu_21772_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21861_p2.read()))) {
        sum_4_reg_21738 = sum_3_reg_21715.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        a_assign_reg_29246 = grp_fu_21772_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        col_offset_2_reg_29211 = col_offset_2_fu_21914_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv1_layer_bias_loa_reg_29164 = conv1_layer_bias_q0.read();
        tmp_75_cast_reg_29159 = tmp_75_cast_fu_21828_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_layer_weights_2_reg_29231 = conv1_layer_weights_s_q0.read();
        tmp_53_reg_29226 = tmp_53_fu_21943_p1026.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        filter_2_reg_29149 = filter_2_fu_21809_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_12_reg_29172 = i_12_fu_21838_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        k_4_reg_29138 = k_4_fu_21793_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_64_reg_29186.read()))) {
        p_reg_29260 = p_fu_24009_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        row_offset_2_reg_29193 = row_offset_2_fu_21867_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_21908_p2.read()))) {
        t1_0_t_reg_29221 = t1_0_t_fu_21938_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_64_reg_29186.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_24003_p2.read()))) {
        tmp_51_reg_29265 =  (sc_lv<1>) (in_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21861_p2.read()))) {
        tmp_61_reg_29203 = tmp_61_fu_21900_p3.read();
        tmp_79_cast_reg_29198 = tmp_79_cast_fu_21892_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21844_p2.read()))) {
        tmp_64_reg_29186 = tmp_64_fu_21856_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        tmp_65_reg_29181 = tmp_65_fu_21850_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        tmp_69_reg_29236 = grp_fu_21778_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        tmp_71_reg_29252 = tmp_71_fu_23996_p3.read();
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(exitcond8_fu_21787_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_21803_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_21832_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_21844_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_21861_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_21908_p2.read()))) {
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24003_p2.read()) || 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_64_reg_29186.read())))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && !(esl_seteq<1,1,1>(tmp_51_reg_29265.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
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

