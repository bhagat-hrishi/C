#include<stdio.h>
/*
2 way to define constant
1)#define preprocessor directive
2)const keyword use
*/

#define i_am_constant_by_directive 5
int main()
{
    /*
    error
    const int a;
    a=9;
    */
    //value assigned to constant variable called as literal
    const int a=89;//here 89 is literal

    printf("\nconstant by macro: %d",i_am_constant_by_directive);
    printf("\nconstant by const keyword: %d",a);

}
