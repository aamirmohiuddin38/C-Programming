// While loop - Sum of even numbers upto a given number 'n'
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------\n");
    printf("While Loop\n");

    int num=0,limit, sum = 0;
    printf("\nEnter Limit: | ");
    scanf("%d", &limit);

    while(num <= limit){
        if (num%2 == 0){
            sum += num;
            printf("%2d | Sum = %d\n", num, sum);
        }
        num++;
    }
    printf("\n");
    return 0;
}