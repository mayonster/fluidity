/* fittings.c
 * mayonster, 2026
 * 
 * This file calculates the hydraulic resistance of various pipe fittings
 * 
 * Takes a linked list of structs containing data about the individual fittings
 * 
 *      - fitting_type; flag corresponding to type; unsigned char
 *      - theta; angle of reduced ports created by the walls of the fitting; float
 *      - alpha; different definitions for check valves and mitre bends but is specified from a list; unsigned char
 *      - d_large; inner diameter of fitting, largest if reduced port, default if not; float
 *      - d_small; inner diameter of fitting, smallest if reduced port; float
 *      - min_pipe_vel_full_disc_lift; as described primarily for check valves; unsigned char
 *      - num_offsets; for butterfly only; unsigned char
 * 
 * NOTE: min_pipe_vel_full_disc_lift should be provided by the manufacturer
 *       If it is not, then its assumed to be the value that produces the largest head loss
*/