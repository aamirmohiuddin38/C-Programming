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

    // floor(), ceil() and round() - these are in math.h header file
    int x;
    float fx;

    fx = 3.14;
    x = fx;
    printf("\n\t FLOOR,CEIL and ROUND...\n");
    printf("\t---------------------------------\n");
    printf("\t Defaut x = %d\n", x);
    
    x = floor(fx);
    printf("\t Floor value: %d\n", x);
    x = ceil(fx);
    printf("\t Ceil value: %d\n", x);
    x = round(fx);
    printf("\t Round value: %d\n", x);
    x = trunc(fx);
    printf("\t Truncated value : %d\n", x);

    //TypeCasting
    /*Changing the type of a variable only for the sake of calculation is called TYPECASTING*/
    int marks = 2, outof = 3;
    float fpercent;
    fpercent = (float) marks / outof * 100; //typecasting - we can cast both or anyone of them
    printf("\n\t TypeCasting...\n");
    printf("\t----------------------------------\n");
    printf("\t Marks = %d | Outof = %d \n", marks, outof);
    printf("\t Percentage = %4.2f%%", fpercent);
    //for printing % symbol, we use %%

    printf("\n\n");
    return 0;
}