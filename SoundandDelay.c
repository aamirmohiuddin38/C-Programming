// Sounds and delay functions in c
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------\n");
    printf(" Sounds(Beep) | Delays(Sleep) \n");

    int i;
    for (i = 0; i<10; i++){
        printf("%d\n", i);
        Sleep(200);
        Beep(1000, 100);
        
    }

    printf("\n");
    return 0;
}
// Beep(frequency, duration)
// Sleep(milliseconds)

//? frequency range - [20Hz - 20000Hz] audible range