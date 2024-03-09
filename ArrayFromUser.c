// Scan array from a user and print the elements
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------\n");
    printf("Scan Array from User\n");

    int arrint[5];
    //scan elements
    printf("\n Enter 5 Array Elements: \n");
    for(int i=0; i<5; i++){
        printf(" [%d] : ", i);
        scanf("%d", &arrint[i]);
    }

    // printing array
    printf("\n\t Given array is: \n");
    printf("\t -----------------------\n");
    for(int i=0; i<5; i++){
        printf("\t arrint[%d] : %d\n", i, arrint[i]);
    }

    printf("\n");
    return 0;
}