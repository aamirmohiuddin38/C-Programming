// Program to reverse a number and Check if it is Pallindrome
#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    printf("C | Programming\n");
    printf("-------------------------\n");
    printf("Reverse | Pallindrome..\n");

    int num, rem, rev=0, temp;
    printf("\nEnter num: | ");
    scanf("%d", &num);

    printf("\n\t Reverse of | : %d \n", num);
    temp = num;
    printf("\t -------------------------\n");
    while(num!=0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    printf("\t %d", rev);

    //check for pallindrome
    if(temp == rev) printf("\n\t Pallindrome\n");
    else printf("\n\t Not a Palindrome\n");
    

    printf("\n");
    return 0;
}