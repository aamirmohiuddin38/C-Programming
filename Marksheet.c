// Marksheet program
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------\n");
    printf("MARKSHEET\n\n");

    int arrmarks[5][4] = {};
    int i, j, total=0, grandTotal = 0;
    float percentage;
    int indexth=0, indexv=0, indexl=0, indext=0;

    //scan marks of the subjects
    for( i = 0; i < 5; i++){
        printf("\nEnter Marks for Sub %d :", i+1);
        printf("\n-----------------------\n");
            printf("Theory: " );
            scanf("%3d", &arrmarks[i][0]);

            printf("Viva: " );
            scanf("%3d", &arrmarks[i][1]);

            printf("Lab: " );
            scanf("%3d", &arrmarks[i][2]);

            total = arrmarks[i][0] + arrmarks[i][1] + arrmarks[i][2];
            arrmarks[i][3] = total;
            grandTotal += total;
    }

    printf("\t Theory  Viva \t Lab \t Total\n");
    printf("----------------------------------------\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Sub %d |\t ", i+1);
        for ( j = 0; j < 4; j++)
        {
            printf("%3d \t ", arrmarks[i][j]);
        }
        printf("\n\n");
    }
    printf("----------------------------------------\n");
    printf("GRAND TOTAL : \t\t\t %3d\n", grandTotal);
    printf("----------------------------------------\n");

    //stats
    printf("\n\t PERCENTAGE : \t %4.2f %%", percentage);
    printf("\n\t Best Theory : \t Sub %d", indexth);
    printf("\n\t Best Viva : \t Sub %d", indexv);
    printf("\n\t Best Lab : \t Sub %d", indexl);
    printf("\n\t Best Sub : \t Sub %d", indext);
    

    printf("\n\n");
}