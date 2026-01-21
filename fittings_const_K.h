#ifndef _fittings_const_K_h_
#define _fittings_const_K_h_

/* 
Constants for calculating values of K for standard fittings

These are to be used in the format 

K = (defined value) * ft               where ft is the calculated friction factor

NOTE: This will not cover valves/fittings with reduced ports. Those are covered in ****.c/h

Fittings:
    - Elbows
    - Valves
    -
*/

/*
 *--------------------------------------------- 
 *                  VALVES 
 *---------------------------------------------
 */

#define K_GATE_B1_T0                          8
             
#define K_GLOBE_B1                          340        //Standard globe          _| _
#define K_ANGLE_OBT_B1                       55        //Not right angle         _ /_
#define K_ANGLE_90_B1                       150        //Right angle no throttle ||=
#define K_ANGLE_90_THRT_B1                   50        //Right angle throttle    []=

#define K_BALL_B1_T0                          3

#define K_BFLY_CEN_2                         45        //Butterfly valves are grouped by
#define K_BFLY_CEN_10                        35        // - Offset
#define K_BFLY_CEN_16                        25        // - Size range designated by start of size range in " (NPS)
#define K_BFLY_2OF_2                         74        
#define K_BFLY_2OF_10                        52        
#define K_BFLY_2OF_16                        43        
#define K_BFLY_3OF_2                        218
#define K_BFLY_3OF_10                        96
#define K_BFLY_3OF_16                        55

#define K_DIAPHRAGM_WEIR                    149
#define K_DIAPHRAGM_ST                       39
             
#define K_SWING_CHECK_35_V                   50        //Minimum pipe velocity (fps) for full disc lift = 35*ROOT(V)
#define K_SWING_CHECK_60_V                  100        //^ = 60*ROOT(V) normal, U/L Listed = 100*ROOT(V)
             
#define K_LIFT_CHECK_B1_40_V                600        //Minimum pipe velocity (fps) for full disc lift = 40*B^2*ROOT(V)
#define K_LIFT_CHECK_B1_140_V                55        //^ = 140*B^2*ROOT(V)
             
#define K_TILTD_CHECK_2_A_5                  40        //Tilted Disc Check Valves; first number denotes start of size range in " (NPS)
#define K_TILTD_CHECK_2_A_15                120        //When alpha is 5deg:
#define K_TILTD_CHECK_10_A_5                 30        //Minimum pipe velocity (fps) for full disc lift = 80*ROOT(V)
#define K_TILTD_CHECK_10_A_15                90
#define K_TILTD_CHECK_16_A_5                 20        //When alpha is 15deg:
#define K_TILTD_CHECK_16_A_15                60        //Minimum pipe velocity (fps) for full disc lift = 30*ROOT(V)
             
#define K_STOP_CHECK_GLOBE_B_1_55_V         400        //Minimum pipe velocity (fps) for full disc lift = 55*B^2*ROOT(V)
#define K_STOP_CHECK_GLOBE_B_1_60_V         300        //^ = 60*B^2*ROOT(V)
#define K_STOP_CHECK_GLOBE_B_1_140_V         55        //^ = 140*B^2*ROOT(V)
#define K_STOP_CHECK_ANGLE_B_1_75_V         200        //^ = 75*B^2*ROOT(V)
#define K_STOP_CHECK_ANGLE_B_1_60_V         350        //^ = 69*B^2*ROOT(V)
#define K_STOP_CHECK_ANGLE_B_1_140_V         55        //^ = 140*B^2*ROOT(V)

#define K_FOOT_POPPET_DISC                  420        //^ = 15*B^2*ROOT(V)
#define K_FOOT_HINGED_DISC                   75        //^ = 35*B^2*ROOT(V)

#define K_PLUG_STRAIGHT_WAY                  18
#define K_PLUG_3WAY                          30
#define K_COCK_3WAY                          90

/*
 *--------------------------------------------- 
 *                 FITTINGS 
 *---------------------------------------------
 */

#define K_ELBOW_90                           30
#define K_ELBOW_45                           16

#define K_MITRE_A_0                           2        //Mitre bends defined by approximate angle of bend
#define K_MITRE_A_15                          4
#define K_MITRE_A_30                          8
#define K_MITRE_A_45                         15
#define K_MITRE_A_60                         25
#define K_MITRE_A_75                         40
#define K_MITRE_A_90                         60

#define K_BEND_90_1                          20        //90deg bends defined by ratio of bend radius to pipe diamter (r/d)
#define K_BEND_90_1p5                        14
#define K_BEND_90_2                          12
#define K_BEND_90_3                          12
#define K_BEND_90_4                          14
#define K_BEND_90_6                          17
#define K_BEND_90_8                          24
#define K_BEND_90_10                         30
#define K_BEND_90_12                         34
#define K_BEND_90_14                         38
#define K_BEND_90_16                         42
#define K_BEND_90_20                         50

#define K_CLS_PTRN_RTRN                      50

#define K_P_ENTR_IN                        0.78        //Pipe entrances; first entry is inward projecting and only has one listing
#define K_P_ENTR_F_0                       0.50        //Flush entrances define by ratio of weld radius to pipe diameter (r/d)
#define K_P_ENTR_F_2                       0.28        //0 is sharp
#define K_P_ENTR_F_4                       0.24        //Number in name is the decimal; 2 is 0.02, 4 is 0.04, 10 is 0.10, etc.
#define K_P_ENTR_F_6                       0.15
#define K_P_ENTR_F_10                      0.09
#define K_P_ENTR_F_15                      0.04        //15 applies to r/d = 0.15 and greater

#define K_PIPE_EXIT                           1        //Projecting, sharp-edged, and rounded exists all have same friction
                                                       //NOTE: This is K outright (applies only to exits)


#endif