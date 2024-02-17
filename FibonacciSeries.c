// Program to generate a Fibonacci Series upto given max
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf(" C | Programming\n");
    printf("-------------------------\n");
    printf("Fibonacci Series\n");

    int a = 0, b = 1, c, limit;
    printf("\nEnter Limit: | ");
    scanf("%d", &limit);

    printf("\n\t Fibonacci Series...\n");
    printf("\t -------------------------\n");
    if (limit == 0) printf("\t 0 \n");
    else{
        printf("\t %d %d ", a, b);
        c = a + b;
        while(c <= limit){
            printf("%d ", c);
            a = b;
            b = c;
            c = a + b;
        }
    }
    
    printf("\n\n");
    return 0;
}