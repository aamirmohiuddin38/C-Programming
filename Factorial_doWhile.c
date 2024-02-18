// Program to calculate factorial of a number - example of DO WHILE LOOP
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming..\n");
    printf("----------------------\n");
    printf("FACTORIAL | Do While loop...\n");

    int num,origNum, fact = 1;
    printf("\nEnter Num: | ");
    scanf("%d", &num);
    origNum = num;

    if(num!=0){
        do{
            fact = num * fact;
            num--;
        } while(num>0);
    }
    printf("\n\t -----------------------------\n");
    printf("\t Factorial of %d is: | %d\n", origNum, fact);
    printf("\t -----------------------------\n");

    printf("\n\n");
    return 0;
}