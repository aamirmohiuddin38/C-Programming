//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------------\n");
    printf("DECISION MAKING ...\n");

    //declaring variable
    int a, b;
    printf("\nEnter a: | ");
    scanf("%d", &a);
    printf("Enter b: | ");
    scanf("%d", &b);

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

     //?IF - ELSE IF-ELSE STATEMENT - comparing two numbers whether they are less, greater or equal
    printf("\n\t ------------------------------\n");
    printf("\t IF-ELSE IF- ELSE Statement...\n");
    printf("\t ------------------------------\n");
    if (a < b)
    {
        printf("\t 'b' is GREATER\n");
    }
    else if(a > b){
        printf("\t 'a' is GREATER\n");
    }
    else{
        printf("\t 'a' and 'b' are equal | a = b |\n");
    }
    
    printf("\n");
    return 0;
}