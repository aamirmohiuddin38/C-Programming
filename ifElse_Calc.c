// Menu Driven Calculator Using if else statements
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming \n");
    printf("--------------------------\n");
    printf("Menu Driven Calculator \n");

    //scan operands
    int num1, num2, choice;
    printf("\n Enter num1: | ");
    scanf("%d", &num1);
    printf(" Enter num2: | ");
    scanf("%d", &num2);

    //choices
    printf("\n\t-------------------------\n");
    printf("\t Choose Option: \n");
    printf("\t-------------------------\n");
    printf("\t 1. Add\n");
    printf("\t 2. Subtract\n");
    printf("\t 3. Multiply\n");
    printf("\t 4. Divide\n");
    printf("\t 5. Exit\n");
    printf("\t--------------------------\n");
    printf("\t Enter Choice: | ");
    scanf("%d", &choice);

    //calculation
    printf("\t ---------------------------\n");
    if(choice == 1) printf("\t Result | num1 + num2 = %d\n", num1 + num2);
    else if (choice == 2) printf("\n\t Result | num1 - num2 = %d\n", num1 - num2);
    else if (choice == 3) printf("\n\t Result | num1 * num2 = %d\n", num1 * num2);
    else if (choice == 4) printf("\n\t Result | \n\t num1 / num2 (quotient) = %d\n \t num1 %% num2 (remainer) = %d\n",num1 / num2, num1 % num2);
    else if (choice == 5) printf("\n\t Thank You....\n");
    else printf("\n\t Invalid Option.. \n");
    printf("\t -----------------------------\n");

    printf("\n");
    return 0;
}