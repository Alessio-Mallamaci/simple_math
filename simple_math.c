/** \file simple_math.h
    \brief a toy example of math library
    \author Alessio Mallamaci
 */

#include "simple_math.h"

/**
   \param a primo numero
   \param b secondo numero
   \return media 
*/

float mean(int a, int b) {
    return (a + b)/2.0; //ho dovuto trasformare il 2 in 2.0 sennò non mi fa il calcolo in float, ma in int
}

int max (int a, int b) {
    if (a > b)
        return a;
    return b;
}