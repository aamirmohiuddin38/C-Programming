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

    // int - float compatibility
    int a, b;
    float fa, fb;
    printf("\n\t Int-Float Compatibility:-\n");
    printf("\t----------------------------------\n");

    a = 2;
    fa = a;
    fb = fa * 2;
    b = fb;
    //"When float is assinged to int, it gets TRUNCATED"
    printf("\t a = %d\n", a);    
    printf("\t fa = %f\n", fa);    
    printf("\t fb = %f\n", fb);
    printf("\t b = %d\n", b);

    printf("\n\n");
    return 0;
}