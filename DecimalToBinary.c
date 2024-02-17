// Program to convert Decimal number into its equivalent Binary
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-------------------------\n");
    printf("Decimal To Binary..\n");

    int num, bit;
    printf("\nEnter num: | ");
    scanf("%d", &num);

    printf("\n\t%d's binary eq. is from bottom to top:\n", num);
    printf("\t--------------------------------------------\n");
    if(num==0) printf("\t0\n");
    while(num!=0){
        bit = num % 2;
        printf("\t%d\n", bit);
        num = num / 2;
    }

    printf("\n");
    return 0;
}