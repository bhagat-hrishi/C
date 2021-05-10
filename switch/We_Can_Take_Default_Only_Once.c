#include<stdio.h>
int main()
{

    //Inside switch statement we can take default only once
    switch (90)
    {
        default:
            printf("I am from 1st default");
            break;
        default:
            printf("I am from second default");
        break;
    }
}
