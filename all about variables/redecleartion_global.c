
// Program 2
#include<stdio.h>

int x;
int x = 5;
//C allows a global variable to be declared again when first declaration doesn’t initialize the variable.
int main()
{
    /*
    this is invalid
    int x;
    int x = 5;
    */
printf("%d", x);
return 0;
}
