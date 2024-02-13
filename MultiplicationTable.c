//Program to display multiplication table of any number
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------\n");
    printf("Multiplication Table...\n");

    int i, num, count;
    printf("\nEnter num: | ");
    scanf("%d", &num);
    printf("Enter Count: | ");
    scanf("%d", &count);

    printf("\n\t Multiplication Table of | %d\n", num);
    printf("\t --------------------------------\n");
    for(i=0; i<count; i++){
        printf("\t %d * %d = %d\n",num, i+1, (num*(i+1)) );
    }

    printf("\n");
    return 0;
}