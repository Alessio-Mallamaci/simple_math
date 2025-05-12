/**
  \file simple_math.h
  \brief a toy example of math library
  \author Alessio Mallamaci
*/

//Se includo un file .h + volte dentro a un programma, lo definisce una sola volta
#ifndef _SIMPLEMATH_
#define _SIMPLEMATH_

//struct per definire una variabile complessa formata da valori int:
typedef struct complex_int {
  int re;
  int imm;
} cx_int_t; //etichetta

//struct per definire una variabile complessa formata da valori float:
typedef struct complex_float {
  float re;
  float imm;
} cx_float_t; //etichetta

//funzioni che fanno la MEDIA di due valori:

float mean (int a, int b); // prototipo della funzione che fa la media tra due numeri int e restituisce valore float della media
cx_float_t cx_mean (cx_int_t a, cx_int_t b); // prototipo della funzione che fa la media tra due numeri int complessi e restituisce valore float complesso della media

//prototipo della funzione che trova il valore MAX di due valori interi:
int max (int a, int b); 

#endif