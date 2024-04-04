// Matrix multiplication program
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-------------------------\n");
    printf("Matrix Muliplication\n");

    int mat_a[10][10], mat_b[10][10], mat_c[10][10];
    int arows, acols, brows, bcols, crows, ccols;
    int i,j,k,temp;

    //Scan sizes of matricies
    printf("\nEnter size of Matrix A: ");
    printf("\nRows: ");
    scanf("%d", &arows);
    printf("Columns: ");
    scanf("%d", &acols);

    brows = acols;

    printf("\nEnter size of Matrix B: ");
    printf("\nRows: %d\n", brows);
    printf("Columns: ");
    scanf("%d", &bcols);

    //Read Elements of matricies A and B
    printf("\nEnter elements of Matrix A: \n");
    for(i=0; i<arows; i++){
        for(j=0; j<acols; j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d", &mat_a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B: \n");
    for(i=0; i<brows; i++){
        for(j=0; j<bcols; j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d", &mat_b[i][j]);
        }
    }

    //Display Matricies - A and B
    printf("\nMatrix A: \n");
    for(i=0; i<arows; i++){
        printf("\t | ");
        for(j=0; j<acols; j++){
            printf("%3d ", mat_a[i][j]);
        }
        printf(" | \n");
    }

    printf("\nMatrix B: \n");
    for(i=0; i<brows; i++){
        printf("\t | ");
        for(j=0; j<bcols; j++){
            printf("%3d ", mat_b[i][j]);
        }
        printf(" | \n");
    }

    //Matrix Muliplication - Calculate C
    crows = arows;
    ccols = bcols;
    for(i=0; i<crows; i++){
        for(j=0; j<ccols; j++){
            mat_c[i][j] = 0;
            for(k=0; k<acols; k++){
                mat_c[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }

    //Display C
    printf("\nMatrix C(AxB): \n");
    for(i=0; i<crows; i++){
        printf("\t | ");
        for(j=0; j<ccols; j++){
            printf("%3d ", mat_c[i][j]);
        }
        printf(" | \n");
    }

    printf("\n\n");
    return 0;
}