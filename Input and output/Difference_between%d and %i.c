//https://stackoverflow.com/questions/1893490/what-is-the-difference-between-conversion-specifiers-i-and-d-in-formatted-io-f

#include<stdio.h>
int main()
{
    //There is no difference in case of printf
    int no=90;
    printf("\n%d and %i",no,no);

    //behave different in scanf

    int d1,d2,d3,i1,i2,i3;

    printf("\nEnter 2 nos in decimal: ");
    scanf("%d %i",&d1,&i1);
    printf("\nnumbers: %i %i",d1,i1);

    printf("\nEnter 2 nos in octal(start with 0): ");
    scanf("%d %i",&d2,&i2);
    printf("\nnumbers: %i %i",d2,i2);

    printf("\nEnter 2 nos in (start with 0x or 0X): ");
    scanf("%d %i",&d3,&i3);
    printf("\nnumbers: %i %i",d3,i3);
}
