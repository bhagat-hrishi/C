
//https://stackoverflow.com/questions/3095861/about-tentative-definition

#include<stdio.h>
/*
A tentative definition is any external data declaration that has no storage class specifier and no initializer.
A tentative definition becomes a full definition if the end of the translation unit is reached and no definition has
appeared with an initializer for the identifier
*/
//all below are tentitive definition
int a;
int a;
int a;
int a=90;
int main()
{
    printf("\nA: %d",a);
    {
        //Error for all
        int b;
        int b;
        int b;
        int b;
        int b=90;
        printf("\nB: %d",b);
    }

}
