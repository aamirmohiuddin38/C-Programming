// Restaurant Bill Program - exploring printf() function
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls"); //clear console

    printf("\t\t\t\tZEWA(KFC)\n");
    printf("\t\t\t    KASHMIR FOOD CENTER\n");
    printf("-----------------------------------------------------------------------------\n\n");

    printf("________________________________________________________________________\n");
    printf("| Bill To: \t\t\t\t\t Bill No: A001390\t|\n");
    printf("| AYATHMULLA \t\t\t\t\t Date: 03-01-202\t|\n");
    printf("| 6005899633 \t\t\t TimeStamp: 03-01-2024 05:45:32 PM\t|\n");
    printf("|_______________________________________________________________________|\n");
    printf("_______________________________________________________\n");
    printf("| S.No | \t Description \t | Qty | Rate |\tAmount |\n");
    printf("|______|_________________________|_____|______|________|\n");
    printf("| 1    | BIRYANI CHICKEN HALF \t |  1.0|  130 |     130|\n");
    printf("|      |                         |     |      |        |\n");
    printf("| 2    | DC30                 \t |  1.0|   30 |      30|\n");
    printf("|______|_________________________|_____|______|________|\n");
    printf("|      |                              SubTotal|     160|\n");
    printf("|______|______________________________________|________|\n");
    
    printf("\n\nBANK DETAILS:\n");
    printf("ACC NO: *********0012\n");
    printf("Mobile No: 0002223334\n");
    printf("IFSC: JAKA0KASH\n\n");

    printf("\t\t\t\t Thanks Visit Again \n");
    printf("-------------------------------------------------------------------------------\n\n");


    return 0;
}