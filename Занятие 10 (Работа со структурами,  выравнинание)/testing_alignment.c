/*
*    Mishkina A.Y.
*    19.06.18
*
*    Description: Alignment check is in progress.
*/
#include <stdio.h>
#include "struct_char_int.h"


int main()
{
    char testing_string[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0 };

    printf("\nБез упаковки:\n");
    struct struct_char_int* testing_struct = 
        (struct struct_char_int*) testing_string;

    printf("char:\t%d\n", testing_struct->type_char);
    printf("int:\t%d\n", testing_struct->type_int);

    printf("\nС упаковкой:\n");
    struct packaged_struct_char_int* packaged_testing_struct = 
        (struct packaged_struct_char_int*) testing_string;
    
    printf("char:\t%d\n", packaged_testing_struct->type_char);
    printf("int:\t%d\n", packaged_testing_struct->type_int);

    return 0;
}
