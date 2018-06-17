/*
*    Mishkina Nastia
*    06.06.18
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    //char str[250];
    char str[] = "5,4";
    char ch = ',';
    int len, i = 0, sum = 0;

    //printf( "Введите строку:\t" );
    printf( "Строка:\t%s\n", str );
    
    //fgets( str, sizeof str, stdin );
    len = strlen(str); 
    while (i != len) {
        if (str[i] != ch) {
            sum += atoi(str + i);
            i++;
	} else 
            i++;
    }
    printf( "sum -> %d\n", sum ); 

    return 0;
}


