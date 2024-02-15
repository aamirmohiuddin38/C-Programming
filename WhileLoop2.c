// While loop - Calculate Square of a num till user exits
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------------\n");
    printf("Squares till user Exits..\n");

    int num;
    printf("\nEnter Num: | ");
    scanf("%d", &num);
    printf("\n\t Sqr: | %d", num*num);

    while(num!=0){
        printf("\n\nEnter another Num (0 for exit): | "); 
        scanf("%d", &num);
        if(num!=0) printf("\n\t Sqr: | %d", num*num);
    }

    printf("\n");
    return 0;
}