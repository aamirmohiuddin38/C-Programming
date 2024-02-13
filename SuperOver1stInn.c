// Program to addup Score per ball in a Super Over Cricket Match
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------\n");
    printf("Super Over...\n");
    
    float balls = 0.6, crr, avg; //total balls six
    int runs, score = 0, max=0;

    for(float i = 0.1; i <= balls; i = i + 0.1){
        printf("\n\nBall: %4.1f | ", i);
        printf("Enter Runs Scored: | ");
        scanf("%d", &runs);
        score = score + runs;
        crr = score / ceil(i);
        avg = (float) score / 6;
        if(runs > max ) max = runs;
        printf("\t ----------------------------------------------\n");
        printf("\t | SCORE: %d | CRR: %4.2f  | AVG: %4.2f | MAX: %d | \n", score, crr, avg, max );
        printf("\t ----------------------------------------------\n");
    }

    printf("\n\t To Win: | %d\n", (score+1));

    printf("\n");
    return 0;
}