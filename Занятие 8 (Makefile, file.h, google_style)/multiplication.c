/*
*    Mishkina A.Y.
*    17.06.18
*
*    Description: Performing an operation: multiplication.
*/
#include <stdio.h>


void multiplication()
{
    int first_multiplier, second_multiplier, result;
 
    printf( "Первое слогаемое:\t" );
    scanf( "%d", &first_multiplier );
    printf( "Второе слогаемое:\t" );
    scanf( "%d", &second_multiplier );

    result = first_multiplier * second_multiplier;

    printf( "Ответ:\t%d\n", result );
}
