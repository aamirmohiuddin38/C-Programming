//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------------\n");
    printf("DECISION MAKING ...\n");

    //declaring variable
    int a;
    printf("\nEnter a: | ");
    scanf("%d", &a);

    //?IF STATEMENT - checking whether 'a' is even, if even, print 'a' and if not then do nothing
    printf("\n\t ------------------------------\n");
    printf("\t IF Statement...\n");
    printf("\t ------------------------------\n");
    if (a % 2 == 0)
    {
        printf("\t 'a' is EVEN\n");
    }

     //?IF - ELSE STATEMENT - checking whether 'a' is even or odd
    printf("\n\t ------------------------------\n");
    printf("\t IF-ELSE Statement...\n");
    printf("\t ------------------------------\n");
    if (a % 2 == 0)
    {
        printf("\t 'a' is EVEN\n");
    }
    else{
        printf("\t 'a' is ODD\n");
    }
    
    printf("\n");
    return 0;
}