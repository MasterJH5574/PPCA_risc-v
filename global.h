#ifndef PPCA_RISC_V_GLOBAL_H
#define PPCA_RISC_V_GLOBAL_H

typedef unsigned int int32;
typedef unsigned char uchar;

extern uchar mem[8388608];

extern int32 reg[32], pc;

#endif //PPCA_RISC_V_GLOBAL_H
