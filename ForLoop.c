// For Loop - Syntax and examples
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-------------------------\n");
    printf("For Loop - Examples\n\n");

    int i; //iteration variable
    //Examples
    printf("\n\t -----------------------------------\n");
    printf("\t Incrementing by 1 | Ascending Order\n");
    printf("\t -----------------------------------\n");
    for(i=0; i<=10; i++){
        printf("\t %d\n", i);
    }

    printf("\n\t -----------------------------------\n");
    printf("\t Incrementing by 2 | Ascending Order\n");
    printf("\t -----------------------------------\n");
    for(i=0; i<=10; i=i+2){
        printf("\t %d\n", i);
    }

    printf("\n\t -----------------------------------\n");
    printf("\t Incrementing by 3 | Ascending Order\n");
    printf("\t -----------------------------------\n");
    for(i=0; i<=10; i=i+3){
        printf("\t %d\n", i);
    }

    printf("\n\t -----------------------------------\n");
    printf("\t Decrementing by 1 | Descending Order\n");
    printf("\t -----------------------------------\n");
    for(i=10; i>=0; i--){
        printf("\t %d\n", i);
    }

    printf("\n\t -----------------------------------\n");
    printf("\t Decrementing by 1 | Descending Order\n");
    printf("\t -----------------------------------\n");
    for(i=10; i>=0; i=i-2){
        printf("\t %d\n", i);
    }

    //Examples of type float
    float j;
    printf("\n\t -----------------------------------\n");
    printf("\t Incrementing by 0.1 | Ascending Order\n");
    printf("\t -----------------------------------\n");
    for(j=0; j<=1; j=j + 0.1){
        printf("\t %4.2f\n", j);
    }

    printf("\n\t -----------------------------------\n");
    printf("\t Incrementing by 0.1 | Ascending Order\n");
    printf("\t -----------------------------------\n");
    for(j=0; j<=1; j=j + 0.05){
        printf("\t %4.2f\n", j);
    }
    printf("\n");
    return 0;
}