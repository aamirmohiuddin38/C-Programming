//Two dimensional arrays - declare, initialize, populate and access
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("--------------------\n");
    printf("2D - Arrays\n\n");

    //initialize
    int arrnums[3][3]={};
    int i, j;

    //scan values of array
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arrnums[i][j]);
        }
        
    }

    // display the values
    printf("\n\t Given array is: ");
    printf("\n\t----------------------");
    for(i=0; i<3; i++){
        printf("\n\t");
        for(j=0; j<3; j++){
            printf("%3d ", arrnums[i][j]);
        }
    }
    

    printf("\n\n");
}