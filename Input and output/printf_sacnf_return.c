#include<stdio.h>
int main()
{

    //printf return total no of character printed
    char st[] = "CODING";

    printf("\nWhile printing ");
    printf(", the value returned by printf() is : %d", printf("%s", st));

    long int n = 123456789;

    printf("\nWhile printing ");
    printf(", the value returned by printf() is : %d",printf("%d", n));


    //scanf return no of inputs successfully scanned


    int a;
    printf("\nEnter 1 no:");
    //enter integer
    printf("\nInput taken : %d",scanf("%d",&a));

    printf("\nEnter 2 strings :\n");
    char ch1[10],ch2[90];
    //enter 2 strings
    printf("\nInput taken: %d ",scanf("%s %s",ch1,ch2));

}
