// How to declare, initialize and access arrays in c
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------\n");
    printf("Arrays in C\n");

    // Array declaration and initialization
    int arrint[5] = {10,20,30,40,50};

    //print | access array elements
    printf("\n\t Printing Array: \n");
    printf("\t ----------------------------\n");
    printf("\t ");
    for(int i=0; i<5; i++)
    {
        printf("%d, ", arrint[i]);
    }

    // Printing with indicies
    printf("\n\n\tPrinting Array with indices..\n");
    printf("\t-----------------------------------\n");
    for(int i=0; i<5; i++){
        printf("\tarrint[%d] : %d\n", i, arrint[i]);
    }

    //? Float Array
    float arrfloat[5] = {1,2,3,4,5};
    printf("\n\n\tPrinting Float Array..\n");
    printf("\t-----------------------------------\n");
    for(int i=0; i<5; i++){
        printf("\tarrfloat[%d] : %4.1f\n", i, arrfloat[i]);
    }

    //? Char Array
    char arrchar[5] = {'A','A', 'M','I','R'};
    printf("\n\n\tPrinting Float Array..\n");
    printf("\t-----------------------------------\n");
    for(int i=0; i<5; i++){
        printf("\tarrchar[%d] : %c\n", i, arrchar[i]);
    }
    //? Printing full name
    printf("\t-------------------\n");
    printf("\t\t");
    for(int i=0; i<5; i++){
        printf("%c", arrchar[i]);
    }
    printf("\n\t--------------------\n");

    printf("\n\n");
    return 0;
}