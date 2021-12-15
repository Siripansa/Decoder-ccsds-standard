
#ifndef decode_H_
#define decode_H_
 
#include <stdio.h>
#include <stdbool.h>

typedef float din_t;
typedef bool dout_t;


#define N 8
#define M 4
#define Num_edge 16

void decode(din_t rx [N],dout_t  data[N]);

#endif
