/** 
    \file simple_math.h
    \brief a toy example of math library
    \author Alessio Mallamaci
*/


#include "simple_math.h"

//funzione che calcola la media di due numeri immaginari
cx_float_t cx_mean (cx_int_t a, cx_int_t b) {

    cx_float_t average; //struct float per salvare il valore della media

    average.re = mean (a.re , b.re);

    average.imm = mean(a.imm , b.imm);

    return average;
}

// Funzione MEAN
float mean(int a, int b) {
    return (a + b)/2.0; //ho dovuto trasformare il 2 in 2.0 sennò non mi fa il calcolo in float, ma in int
}

// Funzione MAX 
int max (int a, int b) {
    if (a > b)
        return a;
    return b;
}