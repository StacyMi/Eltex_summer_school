/*
*    Mishkina A.Y.
*    17.06.18
*
*    Description: There is a choice of action in the calculator.
*/
#include <stdio.h>
#include "arithmetic.h"


int main()
{
    int flag_out = 0;

    while ( flag_out != 1 ) {
        printf( "\tВыберите действие:\n" );
        printf( "\t1.\tСложение\n" );
        printf( "\t2.\tВычитание\n" );
        printf( "\t3.\tУмножение\n" );
        printf( "\t4.\tДеление\n" );
        printf( "\t5.\tЛогарифм\n" );
        printf( "\t0.\tВыход\n" );

        printf( "Ваш выбор:\t" );
        int input;
        scanf( "%d", &input );

        switch ( input ) {
            case 1:
                 printf( "Операция: Сложение\n" );
                 addition();
                 break;
            case 2:
                 printf( "Операция: Вычитание\n" );
                 subtraction();
                 break;
            case 3:
                 printf( "Операция: Умножение\n" );
                 multiplication();
                 break;
            case 4:
                 printf( "Операция: Деление\n" );
                 division();
                 break;
            case 5:
                 printf( "Операция: Логаифм\n" );
                 logarithm();
                 break;
            case 0:
                 printf( "До новых встреч!\n" );
                 flag_out = 1;
                 break;
            default:
                 printf( "Неправильный ввод!\n" );
        }
    }

    return 0;
}
