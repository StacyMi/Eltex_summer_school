/*
*    Mishkina A.Y.
*    04.06.18
*
*    Description: Performing an operation: division.
*/
#include <stdio.h>


void division()
{
    double dividend, divider, result;
 
    printf( "Делимое:\t" );
    scanf( "%lf", &dividend );
    printf( "Делитель:\t" );
    scanf( "%lf", &divider );

    result = dividend / divider;

    printf( "Ответ:\t%.2lf\n", result );
}
