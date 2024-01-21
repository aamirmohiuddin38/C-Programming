// Program to generate salary slip of an employee
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("--------------------------------------\n");
    printf("Salary Slip of an Employee\n");

    //Declaring variables
    float basic, da, hra, conveyance, medical, gross;
    float esic, pf, netPreTax, tds, finalSalary;

    printf("\nEnter Basic Amount: ");
    scanf("%f", &basic);

    //calculations
    da = 0.1 * basic; //10% of basic
    hra = 0.5 * basic + da; //50% of basic + da
    conveyance = 1600; //fixed
    medical = 1250; //fixed
    gross = basic + da + hra + conveyance + medical;
    //deductions
    esic = 0.0475 * gross; //4.75% of gross
    pf = 0.12 * basic; //12% of gross
    netPreTax = gross - esic - pf;
    tds = 0.05 * netPreTax;
    finalSalary = netPreTax - tds;

    //display results
    printf("\n\t ----------------------------------\n");
    printf("\t Basic Salary : \t %8.0f\n", basic);
    printf("\t ----------------------------------\n");
    printf("\t Basic: \t\t| %8.0f\n", basic);
    printf("\t DA: \t\t\t| %8.0f\n", da);
    printf("\t HRA: \t\t\t| %8.0f\n", hra);
    printf("\t Conveyance: \t\t| %8.0f\n", conveyance);
    printf("\t Medical: \t\t| %8.0f\n", medical);
    printf("\t Gross Salary: \t\t| %8.0f\n", gross);
    printf("\t ESIC: \t\t\t| %8.0f\n", esic);
    printf("\t Provident Fund: \t| %8.0f\n", pf);
    printf("\t Net Before Tax: \t| %8.0f\n", netPreTax);
    printf("\t TDS: \t\t\t| %8.0f\n", tds);
    printf("\t ----------------------------------\n");
    printf("\t Salary in Hand: \t| %8.0f\n", finalSalary);
    printf("\t ----------------------------------\n");

    printf("\n");
    return 0;
}