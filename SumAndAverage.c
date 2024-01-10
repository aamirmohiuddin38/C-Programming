//Program to find sum and average of three nos. taken from user - BEGINNER LEVEL
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------------\n");
    printf("Sum & Average Program\n\n");

    //Declaration of Variables
    int num1, num2, num3, sum , avg;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Enter 3rd Number: ");
    scanf("%d", &num3);

    //perform sum
    sum = num1 + num2 + num3;

    //Average
    avg = sum/3;    //as we know count is 3  because we have three numbers only
    
    //Display results
    printf("\n\tResults...\n");
    printf("\t---------------------------------\n");
    printf("\t Given Numbes:\t| %d, %d, %d \n", num1, num2, num3);
    printf("\t Sum: \t\t| %d\n ", sum);
    printf("\t Average: \t| %d\n\n", avg);

    return 0;
}