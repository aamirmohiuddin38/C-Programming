//Swap the values of two variables Using third variable(temp) - BEGINNER LEVEL
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------\n");
    printf("Swap Using Temp Program\n\n");
    
    //Declaring Variables
    int num1, num2, temp;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    //Display before swapping
    printf("\n\t Before Swap: \n");
    printf("\t----------------------------------\n");
    printf("\t Number 1 (num1): | %d\n", num1);
    printf("\t Number 2 (num2): | %d\n", num2);

    //Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    //Display after swapping
    printf("\n\t After Swap: \n");
    printf("\t----------------------------------\n");
    printf("\t Number 1 (num1): | %d\n", num1);
    printf("\t Number 2 (num2): | %d\n\n", num2);

    return 0;
}