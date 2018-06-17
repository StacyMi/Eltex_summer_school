/*
*    Mishkina A.Y.
*    17.06.18
*
*    Description: Performing an operation: logarithm.
*/
#include <math.h>
#include <stdio.h>


void logarithm()
{
    double argument, result_log, result_log10;
 
    printf( "Логарифм от числа:\t" );
    scanf( "%lf", &argument );

    result_log = log ( argument );
    result_log10 = log10 ( argument );

    printf( "Ответ(Натуральный логарифм):\t%.3lf\n", result_log );
    printf( "Ответ(с основанием 10):\t%.3lf\n", result_log10 );
}
