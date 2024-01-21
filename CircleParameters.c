// Program to calculate circle parameters - Area and Circumference
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("--------------------------------------\n");
    printf("Circle Parameters - Area | Circumference\n");

    // Declaring Variables
    const float pi = 3.142;
    float rad, dia, cir, area;

    // Scan radius
    printf("\nEnter Radius of circle: ");
    scanf("%f", &rad);

    //Calculate required parameters
    dia = 2 * rad;
    cir = 2 * pi * rad;
    area = pi * rad * rad;

    //Display results
    printf("\n\t Results.....\n");
    printf("\t -----------------------------\n");
    printf(" \t Radius = %4.2f\n", rad);
    printf(" \t Diameter = %4.2f\n", dia);
    printf(" \t Circumference = %4.2f\n", cir);
    printf(" \t Area = %4.2f\n", area);

    printf("\n");
    return 0;
}