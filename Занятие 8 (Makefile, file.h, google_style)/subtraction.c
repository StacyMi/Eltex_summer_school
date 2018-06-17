/*
*    Mishkina A.Y.
*    17.06.18
*
*    Description: Performing an operation: subtraction.
*/
#include <stdio.h>


void subtraction()
{
    int first_argument, second_argument, result;
 
    printf( "Первый аргумент:\t" );
    scanf( "%d", &first_argument );
    printf( "Второй аргумент:\t" );
    scanf( "%d", &second_argument );

    result = first_argument - second_argument;

    printf( "Ответ:\t%d\n", result );
}
