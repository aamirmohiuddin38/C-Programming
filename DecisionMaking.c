//Exploring Decision Making - IF - IF ELSE - NESTED IF ELSE - TERNARY IF
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------------\n");
    printf("DECISION MAKING ...\n");

    //declaring variable
    int a, b, max;
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
     //?IF - ELSE STATEMENT - ONE LINER
     //!if-else can be written in only one line and without braces if the code block contain only one line as:
    printf("\n\t ------------------------------\n");
    printf("\t IF-ELSE Statement... OneLine/Without braces\n");
    printf("\t ------------------------------\n");

    if (a % 2 == 0) printf("\t 'a' is EVEN\n");
    else printf("\t 'a' is ODD\n");

    //? TERNARY IF ELSE Statement....
    printf("\n\t ------------------------------\n");
    printf("\t TERNARY IF- ELSE Statement\n");
    printf("\t ------------------------------\n");

    max = (a>b) ? a : b;
    printf("\t max = %d\n", max);
    //printf("\t max = %d", (a>b)?a:b);
    (a>b) ? printf("\t max is %d\n", a) : printf("\t max is %d\n", b);

    //?IF - ELSE IF-ELSE STATEMENT - comparing two numbers whether they are less, greater or equal
    printf("\n\t ------------------------------\n");
    printf("\t IF-ELSE | Comparison Operators...\n");
    printf("\t ------------------------------\n");
    if(a<b) printf("\t a<b is true\n");
    if(a<=b) printf("\t a<=b is true\n");
    if(a==b) printf("\t a==b is true\n");
    if(a>b) printf("\t a>b is true\n");
    if(a>=b) printf("\t a>=b is true\n");
    if(a!=b) printf("\t a!=b is true\n");
    /* When C DOES ANY OF THE ABOVE COMPARISONS, IT RETURNS A "1", if the condition is true and "0" if the condition
    is false */

    //?IF - ELSE Combining Multiple Conditions
    printf("\n\t ---------------------------------------------\n");
    printf("\t IF-ELSE: Combining Multiple Conditions (&& ||)...\n");
    printf("\t ---------------------------------------------\n");

    if(a<100 && a%2==0) printf("\t a < 100 and even\n"); //both conditions must be true - AND
    if(a<100 || a%2==0) printf("\t a is either less than 100 or even\n"); //either of the condition must be true - OR

    printf("\n");
    return 0;
}