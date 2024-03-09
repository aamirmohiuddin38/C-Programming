//Finding min, max, sum and average of a given array
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-------------------------\n");
    printf("Array - MIN, MAX, SUM, AVG\n");

    int arrint[5], choice, min, max, sum;
    float avg;
    //scan array
    printf("\n Enter 5 elements of array: | \n");
    for(int i=0; i<5; i++){
        printf(" [%d] : ", i);
        scanf("%d", &arrint[i]);
    }
    //print the array
    int repeat = 1;
    while(repeat==1){
        printf("\n\n Elements are: | ");
    for(int i=0; i<5; i++){
        printf(" %d, ", arrint[i]);
    }
    // Menu Options
    printf("\n\n\t -------------------\n");
    printf("\t Menu Options...\n");
    printf("\t -------------------\n");
    printf("\t 1. Min\n");
    printf("\t 2. Max\n");
    printf("\t 3. Sum\n");
    printf("\t 4. Avg\n");
    
    printf("\n\t Enter your choice: | ");
    scanf("%d", &choice);

    switch(choice){
            case 1:
            min = arrint[0];
            for(int i=1; i<5; i++){
                if (arrint[i] < min) min = arrint[i];
            }
            printf("\t\t-------------------------\n");
            printf("\t\t Result: | MIN = %d\n", min);
            printf("\t\t-------------------------\n");
            break;
        case 2:
            max = arrint[0];
            for(int i=1; i<5; i++){
                if (arrint[i] > max) max = arrint[i];
            }
            printf("\t\t-------------------------\n");
            printf("\t\t Result: | MAX = %d\n", max);
            printf("\t\t-------------------------\n");
            break;
        case 3:
            sum = arrint[0];
            for(int i=1; i<5; i++){
                sum += arrint[i];
            }
            printf("\t\t-------------------------\n");
            printf("\t\t Result: | SUM = %d\n", sum);
            printf("\t\t-------------------------\n");
            break;
        case 4:
            sum = arrint[0];
            for(int i=1; i<5; i++){
                sum += arrint[i];
            }
            avg = sum/5;
            printf("\t\t-------------------------\n");
            printf("\t\t Result: | AVG = %4.2f\n", avg);
            printf("\t\t-------------------------\n");
            break;
        default:
            printf("\n\t Invalid option entered... Try again!!!\n");
            break;
        }
    printf("Do you want to find something again? : YES(1) | NO(0) - ");
    scanf("%d", &repeat);
    }

    printf("\n");
    return 0;
}