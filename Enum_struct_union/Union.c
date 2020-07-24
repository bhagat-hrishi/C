#include<stdio.h>

union myunion
{
    int x, y;
    double d;

}var1;
int main()
{
    union myunion var2;

     var2.x = 2; // t.y also gets value 2
    printf("After making x = 2:\n x = %d, y = %d\n\n",
           var2.x, var2.y);

    //Size of a union is taken according the size of largest member in union

    printf("\nsize of int: %d \nsize of double: %d\nsize of variable: %d",sizeof(int),sizeof(double),sizeof(var2));

}
