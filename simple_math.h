/**
  \file simple_math.h
  \brief a toy example of math library
  \author Alessio Mallamaci
*/

#ifndef _SIMPLEMATH_
#define _SIMPLEMATH_

//struct per definire una variabile complessa formata da valori int:
typedef struct complex_int {
  int re;
  int imm;
} cx_int_t;

//struct per definire una variabile complessa formata da valori float:
typedef struct complex_float {
  float re;
  float imm;
} cx_float_t;

//funzione che fa la MEDIA di due valori:
float mean (int a, int b); // fa la media tra due numeri int
cx_float_t cx_mean (cx_int_t a, cx_int_t b); // fa la media di due numeri float

//funzione che trova il valore MAX di due valori:
int max (int a, int b); // trova il massimo tra due parametri

#endif