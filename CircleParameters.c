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

                //Declaring a constant: 'const'

/*A variable is something that can change - that's why the name variable.
So whereever we use it in the program, at the time of execution, each time the processor will go to the
memory and get its latest value, because it can change anytime.[thats what it is supposed to do]
But for example pi = 3.14, it is not going to change if it is used 10 times or 20 times in a program, so 
we don't want processor go the memory and get the value ( as it is never going to change ), so when we declare 
pi as 'const' , its value is embedded in the program where we have used pi, so it will become part of the program
itself, processor doesn't need to go the memory and thus makes execution faster.*/