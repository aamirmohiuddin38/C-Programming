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

    printf("\n\n");
    return 0;
}