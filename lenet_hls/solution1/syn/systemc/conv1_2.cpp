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
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_21892_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        col_offset_reg_21846 = col_offset_2_reg_29979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_21958_p2.read()))) {
        col_offset_reg_21846 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) && 
         esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_1))) {
        filter_reg_21775 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_21929_p2.read()))) {
        filter_reg_21775 = filter_2_reg_29880.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_21787 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24725_p2.read()) || 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_192_reg_29922.read())))) {
        i_reg_21787 = i_12_reg_29908.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(conv1_out_V_V_full_n.read(), ap_const_logic_1))) {
        j_reg_21799 = tmp_191_reg_29917.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_fu_21929_p2.read()))) {
        j_reg_21799 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        k_reg_21764 = k_4_reg_29869.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        k_reg_21764 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond7_fu_21941_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_192_fu_21953_p2.read()))) {
        p1_reg_21857 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
                !(esl_seteq<1,1,1>(tmp_1_reg_30117.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
        p1_reg_21857 = p_reg_30112.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        p_0151_5_reg_21834 = grp_fu_24737_p3.read().range(26, 11);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_21958_p2.read()))) {
        p_0151_5_reg_21834 = p_Val2_s_reg_21811.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_22081_p2.read()))) {
        p_Val2_s_reg_21811 = p_0151_5_reg_21834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_fu_21941_p2.read()))) {
        p_Val2_s_reg_21811 = ap_const_lv16_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_22081_p2.read()))) {
        row_offset_reg_21823 = row_offset_2_reg_29929.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_fu_21941_p2.read()))) {
        row_offset_reg_21823 = ap_const_lv3_0;
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        a_assign_8_reg_30041 = a_assign_8_fu_24438_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        a_assign_reg_30035 = a_assign_fu_24431_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        col_offset_2_reg_29979 = col_offset_2_fu_22087_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_layer_weights_2_reg_29999 = conv1_layer_weights_s_q0.read();
        tmp_6_reg_29994 = tmp_6_fu_22116_p1026.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        exp_tmp_V_reg_30052 = ireg_V_fu_24445_p1.read().range(62, 52);
        p_Result_70_reg_30047 = ireg_V_fu_24445_p1.read().range(63, 63);
        tmp_213_reg_30062 = tmp_213_fu_24475_p2.read();
        tmp_280_reg_30057 = tmp_280_fu_24471_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        filter_2_reg_29880 = filter_2_fu_21898_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_12_reg_29908 = i_12_fu_21935_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
        k_4_reg_29869 = k_4_fu_21882_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond8_fu_21958_p2.read()))) {
        l_reg_29966 = l_fu_22069_p3.read();
        p_Result_67_reg_29949 = tmp_V_34_fu_22009_p2.read().range(16, 16);
        tmp_194_reg_29944 = tmp_194_fu_22019_p2.read();
        tmp_276_reg_29971 = tmp_276_fu_22077_p1.read();
        tmp_V_35_reg_29954 = tmp_V_35_fu_22039_p3.read();
        tmp_V_42_cast_reg_29960 = tmp_V_42_cast_fu_22047_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, tmp_194_reg_29944.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        m_s_reg_30025 = m_20_fu_24359_p2.read().range(63, 1);
        tmp_275_reg_30030 = m_20_fu_24359_p2.read().range(25, 25);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        man_V_10_reg_30068 = man_V_10_fu_24501_p3.read();
        newSel3_reg_30094 = newSel3_fu_24661_p3.read();
        or_cond1_reg_30099 = or_cond1_fu_24675_p2.read();
        or_cond_reg_30089 = or_cond_fu_24655_p2.read();
        sel_tmp10_reg_30084 = sel_tmp10_fu_24649_p2.read();
        sh_amt_reg_30073 = sh_amt_fu_24532_p3.read();
        tmp_281_reg_30079 = tmp_281_fu_24546_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_192_reg_29922.read()))) {
        p_reg_30112 = p_fu_24731_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        rhs_V_reg_29895 = rhs_V_fu_21921_p1.read();
        tmp_25_cast_reg_29890 = tmp_25_cast_fu_21917_p1.read();
        tmp_5_reg_29900 = tmp_5_fu_21925_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        row_offset_2_reg_29929 = row_offset_2_fu_21964_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_fu_22081_p2.read()))) {
        t1_0_t_reg_29989 = t1_0_t_fu_22111_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        tmp_191_reg_29917 = tmp_191_fu_21947_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond7_fu_21941_p2.read()))) {
        tmp_192_reg_29922 = tmp_192_fu_21953_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_194_reg_29944.read()))) {
        tmp_195_reg_30009 = tmp_195_fu_24192_p2.read();
        tmp_200_reg_30015 = tmp_200_fu_24299_p3.read();
        tmp_201_reg_30020 = tmp_201_fu_24307_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_192_reg_29922.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_24725_p2.read()))) {
        tmp_1_reg_30117 =  (sc_lv<1>) (in_V_V_empty_n.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_21958_p2.read()))) {
        tmp_225_reg_29939 = tmp_225_fu_21997_p3.read();
        tmp_29_cast_reg_29934 = tmp_29_cast_fu_21989_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        tmp_V_32_reg_30104 = tmp_V_32_fu_24718_p3.read();
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())) && esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(exitcond4_fu_21876_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_21892_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_21929_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond7_fu_21941_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_21958_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_22081_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state9;
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(conv1_out_V_V_full_n.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_24725_p2.read()) || 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_192_reg_29922.read())))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state21;
            }
            break;
        case 1048576 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && !(esl_seteq<1,1,1>(tmp_1_reg_30117.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state21;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<21>) ("XXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

