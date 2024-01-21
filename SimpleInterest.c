// Program to calculate simple interst
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-----------------------------------\n");
    printf("Simple Interest.\n");

    // Declaring required variables
    float p, n, r, si, tds, finalAmount;

    // Scan p, n and r
    printf("\nEnter Principal(p):\t| ");
    scanf("%f", &p);
    printf("No. Of Years(n):\t| ");
    scanf("%f", &n);
    printf("Rate of Interest(r):\t| ");
    scanf("%f", &r);

    //Caculate values
    si = p * n * r /100;
    tds = 0.1 * si;
    finalAmount = p + si - tds;

    // Display results
    printf("\n\t --------------------------------------\n");
    printf("\t Interest Details ...\n");
    printf("\t --------------------------------------\n");
    printf("\t Interest Before Tax:\t| Rs. %8.0f\n", si);
    printf("\t TDS (10%% of Interest):\t| Rs. %8.0f\n", tds);
    printf("\t Interest After Tax:\t| Rs. %8.0f\n", si - tds);
    printf("\t Final In Hand Amount:\t| Rs. %8.0f\n", finalAmount);
    printf("\t --------------------------------------\n");

    printf("\n");
    return 0;
}