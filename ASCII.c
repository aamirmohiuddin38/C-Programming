//Program to generate ASCII values of small and capital letters
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------\n");
    printf("ASCII Values\n");

    char i;
    printf("\n\t-------------------------------------\n");
    printf("\t ASCII Values from a-z\n");
    printf("\t-------------------------------------\n");
    printf("\t Character | ASCII Value\n");
    for(i = 'a'; i <= 'z'; i++){
        printf("\t%c | %d \n", i, i);
    }

    printf("\n\t-------------------------------------\n");
    printf("\t ASCII Values from A-Z\n");
    printf("\t-------------------------------------\n");
    printf("\t Character | ASCII Value\n");
    for(i = 'A'; i <= 'Z'; i++){
        printf("\t%c | %d \n", i, i);
    }

    printf("\n");
    return 0;
}