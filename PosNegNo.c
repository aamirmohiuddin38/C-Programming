//Program to check whether a Number is positive, negative or zero
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming \n");
    printf("---------------------------\n");
    printf("Postive | Negative | Zero \n");

    int num;
    printf("\nEnter num: | ");
    scanf("%d", &num);

    //check conditions
    printf("\n\t -------------------\n");

    if(num > 0) printf("\t Positive\n");
    else if (num < 0) printf("\t Negative\n");
    else printf("\t Zero\n");

    printf("\t -------------------\n");

    //using ternery operator
    (num>0) ? printf("\t +ive\n") : (num < 0) ? printf("\t -ive\n") : printf("\t Zero\n");
    printf("\t -------------------\n");

    printf("\n");
    return 0;
}