// Sorting of an array - BUBBLE SORT
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming \n");
    printf("------------------------\n");
    printf("Sorting an Array - BUBBLE SORT\n\n");

    //Declaring variables
    int count, i, j, temp;
    int arrnum[20];

    // Scan array elements
    printf("Enter the number of elements: ");
    scanf("%d", &count);

    printf("\n Enter %d numbers: \n",  count);
    for(i=0; i<count; i++){
        printf(" [%d]:", i);
        scanf("%d", &arrnum[i]);
    }

    // Display array elements
    printf("\n -------------------------------------\n");
    printf(" Given array is: | ");
    for(i=0; i<count; i++){
        printf("%d ", arrnum[i]);
    }
    printf("\n -------------------------------------\n");

    //Sort the Array - Ascending
    for(i=0; i<count-1; i++){
        for(j=0; j<count-1-i; j++){
            if(arrnum[j] > arrnum[j+1]){
                temp = arrnum[j];
                arrnum[j] = arrnum[j+1];
                arrnum[j+1] = temp;
            }
        }
    }

    // Display sorted array elements - ascending
    printf("\n\t -------------------------------------\n");
    printf("\t ASCENDING  Sort: | ");
    for(i=0; i<count; i++){
        printf("%d ", arrnum[i]);
    }

    //Sort the Array - Descending
    for(i=0; i<count-1; i++){
        for(j=0; j<count-1-i; j++){
            if(arrnum[j] < arrnum[j+1]){
                temp = arrnum[j];
                arrnum[j] = arrnum[j+1];
                arrnum[j+1] = temp;
            }
        }
    }

    // Display sorted array elements - Descending
    printf("\n\t DESCENDING  Sort: | ");
    for(i=0; i<count; i++){
        printf("%d ", arrnum[i]);
    }
    printf("\n\t -------------------------------------\n");

    printf("\n\n");
}