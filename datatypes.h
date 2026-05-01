#ifndef _DATATYPES_H
#define _DATATYPES_H

typedef struct {
    unsigned char fitting_type;
    float theta;
    unsigned char alpha;
    float d_large;
    float d_small;
    unsigned char min_pipe_vel_full_disc_lift;
    unsigned char num_offets;
} Fitting_Information;

typedef struct {
    unsigned int pipe_length;
    unsigned char nominal_pipe_size;
    float inner_diameter;
} Pipe_Information;

typedef struct {
    float temperature;
    float pressure;
    float density;
    float dynamic_viscosity;
    float mass_flow_rate;
    float velocity;
} Fluid_Properties;

#endif

