// Right Triangle Pattern 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------\n");
    printf(" Triangle Pattern \n\n");

    int i,j;
    for(i=0; i<10; i++){ //rows
        for(j=0; j<i; j++){ //columns
            Sleep(200); 
            Beep(1000*j, 100);
            printf("*  ");
        }
        printf("\n");
        Beep(1000,100);
        Sleep(1000);
        

    }

    printf("\n\n");
    return 0;
}