#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    system("cls");
    printf("C | Programming\n");
    printf("--------------------\n");
    printf("Variables And Scanf()\n\n");

    // Variable Declarations
    int intNum;
    float floatNum;
    double doubleNum;
    bool TrueOrFalse;   //not built in - can be implemented using stdbool.h header file

    //Scanning different types of values from User using scanf() function

    printf("Enter an integer Num: ");
    scanf("%d", &intNum);

    printf("Enter a Floating point number: ");
    scanf("%f", &floatNum);

    printf("Enter a double(floating num with more precision) number:");
    scanf("%lf", &doubleNum);

    printf("Enter either True(1) or false(0):");
    scanf("%d", &TrueOrFalse);

    //Print Results
    printf("\n\t Results: \n");
    printf("\t-----------------------------\n");
    printf("\tThe value of intNum = %d\n",intNum);
    printf("\tThe value of floatNum = %f\n",floatNum);
    printf("\tThe value of doubleNum = %lf\n",doubleNum);
    printf("\tThe value of TrueOrFalse = %d\n",TrueOrFalse);



    return 0;
}