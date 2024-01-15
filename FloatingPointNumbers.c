//Dealing with Floating point numbers and their different formats to display - BEGINNER
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("------------------------------\n");
    printf("Floating Point Numbers\n\n");

    //Declaring float variable
    float fnum;

    //scanning 
    printf("Enter fnum: ");
    scanf("%f", &fnum);

    // Displaying in differen formats
    printf("\n\tVarious formats...\n");
    printf("\t------------------------------\n");
    printf("\t Defautl fnum = %f\n", fnum);
    printf("\t Type1 = %4.2f\n", fnum);
    printf("\t Type2 = %4.0f\n", fnum);
    printf("\t Type3 = %g\n", fnum);
    printf("\t Type4 = %4.2g\n", fnum);

    printf("\n\n");
    return 0;
}