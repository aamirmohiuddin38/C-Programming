// Right Triangle Pattern 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------\n");
    printf(" Triangle Pattern - Reverse \n\n");

    int i,j;
    for(i=0; i<10; i++){
        for(j=9; j>=i; j--){
            printf("*  ");
            Beep(300*j, 200);
            Sleep(100*j);
        }
        printf("\n");
        Beep(1000,200);
        Sleep(500);
    }

    printf("\n\n");
    return 0;
}