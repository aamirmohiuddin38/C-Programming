// Switch Case Statement - Calc
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------------\n");
    printf("Swich Case - Calc\n");

    int num1, num2, choice;
    printf("\nEnter num1: | ");
    scanf("%d", &num1);
    printf("Enter num2: | ");
    scanf("%d", &num2);

    printf("\n\t Menu Options...\n");
    printf("\t --------------------------\n");
    printf("\t 1. Add\n");
    printf("\t 2. Sub\n");
    printf("\t 3. Multiply\n");
    printf("\t 4. Divide\n");
    printf("\t 5. Exit\n");

    printf("\n\t Enter Option: | ");
    scanf("%d", &choice);
    printf("\n\t RESULT....\n");
    printf("\t ---------------------------------------------\n");
    switch(choice){
        case 1:
            printf("\t Add: num1 + num2 = %d", num1 + num2);
            break;
        case 2:
            printf("\t Sub: num1 - num2 = %d", num1 - num2);
            break;
        case 3:
            printf("\t Add: num1 * num2 = %d", num1 * num2);
            break;
        case 4:
            printf("\t Divide | Quotient: num1 / num2 = %d\n", num1 / num2);
            printf("\t Divide | Remainder: num1 %% num2 = %d", num1 % num2);
            break;
        case 5:
            printf("\t Thank You....");
            break;
        default:
            printf("\t Invalid option entered...");
            break;
    }
    printf("\n\t ---------------------------------------------\n");

    printf("\n");
    return 0;
}