//Program to check whether a year is leap year or not
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("--------------------------\n");
    printf(" Leap Year Program\n");

    int year;
    printf("\n Enter Year: | ");
    scanf("%d", &year);

    //check
    printf("\n\t -------------------------------\n");
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("\t Leap Year...\n");
    else
        printf("\t Not a Leap Year...\n");
    printf("\t -------------------------------\n");

    printf("\n");
    return 0;
}