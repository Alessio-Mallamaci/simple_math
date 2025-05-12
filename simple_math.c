/** 
    \file simple_math.h
    \brief a toy example of math library
    \author Alessio Mallamaci
*/


#include "simple_math.h" //includo file.h (funziona come un copia e incolla del file.h)

// implementazione della funzione che fa la media tra due numeri int e restituisce valore float della media
float mean(int a, int b) {
    return (a + b)/2.0; //ho dovuto trasformare il 2 in 2.0 sennò non mi fa il calcolo in float, ma in int
}

// implementazione della funzione che fa la media tra due numeri int complessi e restituisce valore float complesso della media
cx_float_t cx_mean (cx_int_t a, cx_int_t b) {

    cx_float_t average; //struct per definire il valore della media come variabile complessa float:

    average.re = mean (a.re , b.re); //fa la media delle componenti reali delle due variabili

    average.imm = mean(a.imm , b.imm); ////fa la media delle componenti immaginarie delle due variabili

    return average;
}


//implementazione della funzione che trova il valore MAX di due valori interi:
int max (int a, int b) {
    if (a > b)
        return a;
   
    return b;
}
