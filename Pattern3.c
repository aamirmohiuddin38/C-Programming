// Pattern 3
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------\n");
    printf(" Playing with Numbers.. \n\n");

    int i,j;
    for(i=1; i<=10; i++){
        for(j=1; j<=i; j++){
            printf("%d ", j);
            if (i==j) printf(">");
        }
        printf("\n");
    }
    for(i=9; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d ", j);
            if (i==j) printf(">");
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}