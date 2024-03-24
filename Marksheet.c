// Marksheet program
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("----------------------\n");
    printf("MARKSHEET\n\n");

    int arrmarks[5][4] = {47,7,5,0,53,6,10,0,69,8,7,0,48,9,8,0,55,5,6,0};
    int i, j, temp, total=0, grandTotal = 0;
    float percentage;
    int indexth=0, indexv=0, indexl=0, indext=0;

    //scan marks of the subjects
    for( i = 0; i < 5; i++){
        // printf("\nEnter Marks for Sub %d :", i+1);
        // printf("\n-----------------------\n");
        //     printf("Theory: " );
        //     scanf("%3d", &arrmarks[i][0]);

        //     printf("Viva: " );
        //     scanf("%3d", &arrmarks[i][1]);

        //     printf("Lab: " );
        //     scanf("%3d", &arrmarks[i][2]);

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
    percentage = grandTotal / 6;
    printf("\n\t PERCENTAGE : \t %4.1f %%", percentage);
    
    temp = 0;
    for(i=0; i<5; i++){
        if(arrmarks[i][0] > temp){
            temp = arrmarks[i][0];
            indexth = i+1;
        }
    }
    printf("\n\t Best Theory : \t Sub %d", indexth);

    temp = 0;
    for(i=0; i<5; i++){
        if(arrmarks[i][1] > temp){
            temp = arrmarks[i][1];
            indexv = i+1;
        }
    }
    printf("\n\t Best Viva : \t Sub %d", indexv);

    temp = 0;
    for(i=0; i<5; i++){
        if(arrmarks[i][2] > temp){
            temp = arrmarks[i][2];
            indexl = i+1;
        }
    }
    printf("\n\t Best Lab : \t Sub %d", indexl);

    temp = 0;
    for(i=0; i<5; i++){
        if(arrmarks[i][3] > temp){
            temp = arrmarks[i][3];
            indext = i+1;
        }
    }
    printf("\n\t Best Sub : \t Sub %d", indext);
    

    printf("\n\n");
}