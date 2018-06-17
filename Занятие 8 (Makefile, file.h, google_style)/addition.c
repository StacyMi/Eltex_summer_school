/*
*    Mishkina A.Y.
*    17.06.18
*
*    Description: Performing an operation: addition.
*/
#include <stdio.h>


void addition()
{
    int first_syllable, second_syllable, result;
 
    printf( "Первое слогаемое:\t" );
    scanf( "%d", &first_syllable );
    printf( "Второе слогаемое:\t" );
    scanf( "%d", &second_syllable );

    result = first_syllable + second_syllable;

    printf( "Ответ:\t%d\n", result );
}
