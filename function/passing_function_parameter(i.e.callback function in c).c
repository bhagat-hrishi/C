//https://medium.com/@jraleman/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea
#include<stdio.h>
/*
A callback is any executable code that is passed as an argument to other code, which is expected to call back (execute) the argument at a given time [Source : Wiki].
In simple language, If a reference of a function is passed to another function as an argument to call it, then it will be called as a Callback function.
*/

void printNumber(int nbr)
{
    printf("%d\n", nbr);
}
/*
 myFunction takes an argument of a function type void, that returns a type void, and takes an int as an argument; (void (*f)(int)).
*/
void myFunction(void (*f)(int))
{
    for(int i = 0; i < 5; i++)
    {
        (*f)(i);
    }
}


void printGoogle()
{
    printf("\nGoogle");
}
void I_call_Google(void (*google_ptr)())
{
    (*google_ptr)();
}
int main(void)
{
    myFunction(printNumber);

    I_call_Google(printGoogle);
    I_call_Google(&printGoogle);
    return (0);
}
