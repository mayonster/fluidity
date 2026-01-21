#ifndef _datatypes_h_
#define _datatypes_h_

typedef struct {
    unsigned char fitting_type;
    float theta;
    unsigned char alpha;
    float d_large;
    float d_small;
    unsigned char min_pipe_vel_full_disc_lift;
    unsigned char num_offets;
} fitting_information;

#endif