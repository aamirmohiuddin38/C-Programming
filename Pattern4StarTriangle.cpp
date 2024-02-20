// Pattern 4 - Triangle of Star
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------------\n");
    printf("Triangle of Stars\n\n");

    int spaces = 10;
    for(int row=0; row<10; row++){
        //Print spaces
        for(int space=0; space<spaces; space++){
            printf(" ");
        }
        spaces--;
        //Print *'s
        for (int col=0; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}