# fluidity
Flow calculations for a piping system.

Starting with control valve sizing :)

# Spec
This spec will develop as I go and is subject to change.

## Control Valve Sizing

For control valve sizing, it is assumed there is an anticipated near constant flowrate for steady state operation. This allows for relatively easy calculation of a control valve Cv. 
The user will need to describe the system they would like to solve. The only absolute requirements are the system inlet pressure, the number of fittings and their type and sizing information before and after the control valve, the length of straight pipe in each half of the system, the size of the pipe, the process fluid, and the information for the process fluid. 
When this type of calculation is performed, generally the system gets broken into segments, so this program will allow the user to do so if desired. This adds some level of context and an avenue to troubleshoot if the engineer's judgement signals to them that the output seems off. Additionally, when a pipe size changes (e.g. an expander is fitted), the Reynolds No. of the flow changes, so there will need to be multiple segments.
Breaking the calculation into segments also allows for re-calculation of important physical properties of the process fluid, thus increasing the accuracy of the calculation. At this time, it is unknown whether there will be a library of this information available similar to the one found in Perry's.

The output will ideally include some ascii representation of the system and a readout of the solution. However, it will absolutely include an exportable CSV of the output to be stylized with... *excel* 

**NOTE**: this program will only use hydrostatic calculations and is *not* intended to be an intricate fluid simulation program. Afterall, sometimes you just gotta assume a gas behaves like a liquid to save yourself some time.


## Input
The program will take the following inputs:
1. Number of segments before the the control valve
2. Known inlet pressure
3. Number of segements after the control valve
4. Known outlet pressure
5. Number of fittings for each segment
6. Type of each fitting in the segment and info about them
7. Length of straight pipe in each segment
8. Size of pipe for each segment (program may or may not assume the size based on the presence of a reducer/expander or lack thereof)

## Data Types
Information for each fitting will be in its own `struct`
Information about the piping in its segment will be in its own `struct`
Physical properties for the fluid will be in its its own `struct`

The above items will be assembled into a segment `struct`
This segment struct will contain flags for whether or not it is the system inlet, system outlet, control valve inlet, and control valve outlet.

The segment structs will be associated in a `linked list`


##### A note about the project
Companies that perform these types of calculations frequently have tools such as excel sheets to perform them decently quickly with only quick checks to a reference text. This aims to automate the calculations, but it is primarily intended as a pet project for fun and to get back into programming in C because I find doing so incredibly enjoyable. If you're somehow reading this and have some suggestions to improve the code, feel free to start a discussion or PR; I'd be more than happy to talk. However, If you see this and your only thought "why don't you just use [insert well-known process simulation tool here]," this project is **not** for you.

<3

