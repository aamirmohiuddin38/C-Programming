// Program to reverse a 5 digit number without loops and conditions - Basic BEGINNER LEVEL
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------------------------\n");
    printf("Reverse a 5 Digit Number Program\n\n");

    //Declaring variables
    int num, rem, rev = 0;

    printf("Enter any Five digit Number: ");
    scanf("%d", &num);

    //Extracting Unit Digit One by One in following steps:
    printf("\n\t Process...\n");
    printf("\t-----------------------------------------------");
    //Step1:
    rem = num % 10; //remainder
    rev = rev + (rem * 10000); //multipling by 10000 because we know we have to strictly enter 5 digit as of now
    num = num / 10; //quotient
    printf("\n\t Quotient:  %d | Remainder: %d | Reverse: %d", num, rem, rev);

    //Step2:
    rem = num % 10; //remainder
    rev = rev + (rem * 1000); //remaining is 4 digit no.
    num = num / 10; //quotient
    printf("\n\t Quotient:  %d | Remainder: %d | Reverse: %d", num, rem, rev);

    //Step3:
    rem = num % 10; //remainder
    rev = rev + (rem * 100); //remaining is 3 digit no.
    num = num / 10; //quotient
    printf("\n\t Quotient: %d | Remainder: %d | Reverse: %d", num, rem, rev);

    //Step4:
    rem = num % 10; //remainder
    rev = rev + (rem * 10); //remaining is 2 digit no.
    num = num / 10; //quotient
    printf("\n\t Quotient:  %d | Remainder: %d | Reverse: %d", num, rem, rev);

    //Step5:
    rem = num % 10; //remainder
    rev = rev + (rem * 1); //1
    num = num / 10; //quotient
    printf("\n\t Quotient:  %d | Remainder: %d | Reverse: %d", num, rem, rev);

    printf("\n\t----------------------------------------------\n");
    printf("\tFinal Reversed Number: %d\n", rev);
    printf("\t---------------------------------------------\n\n");

    return 0;
}