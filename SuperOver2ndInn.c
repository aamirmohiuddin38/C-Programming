// Program to see a cricket match status in super over of 2nd Innings
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    system("cls");
    printf("C | Programming\n");
    printf("---------------------\n");
    printf("Super Over | 2nd Innings\n");
    int ToWin, runs, score = 0, ballsLeft, balls, target;
    float RR;

    printf("\nEnter Runs to Win: | ");
    scanf("%d", &ToWin);
    target = ToWin;

    printf("\nEnter Total Balls: | ");
    scanf("%d", &balls);

    ballsLeft = balls;

    printf("\t\t ______________________________\n");
    printf("\t\t To Win: |  %d,", ToWin);
    printf("\t Balls | %d", balls);
    printf("\n\t\t ------------------------------\n");
    printf("\t\t Let's Play...\n");

    int ball;
    for (ball = 1; ball <= balls && ToWin > 0; ball++) {
        printf("\n\nBall %d || ", ball);
        printf(" Enter Runs Scored: | ");
        scanf("%d", &runs);
        score += runs;
        ToWin -= runs;
        ballsLeft--;
        if(ballsLeft == 0) RR = ToWin;
        else RR = (float)ToWin / ballsLeft;

        if(!(ToWin < 0)){
        printf("Score: | %d\n", score);
        printf("\tRuns Required: %d | Balls Left: %d | Reqd. RR: %4.2f\n", ToWin, ballsLeft, RR);
        printf("\t\tIND need %d runs in %d balls", ToWin, ballsLeft);}
    }

    if (score >= target) {
        printf("\t\tIND need 0 runs");
        printf("\n\n\tCONGRATULATIONS! INDIA WINS THE MATCH with %d balls remaining!\n", balls - ball + 1);
    } else if (ball > balls && ToWin > 2) {
        printf("\n\n\tMATCH OVER! India couldn't chase the target of %d runs.\n", score);
    } else if(score == (target-1)) {
        printf("\n\n\tMATCH TIED! India scored %d runs in %d balls.\n", score, balls - ball + 1);
    }

    printf("\n");
    return 0;
}
