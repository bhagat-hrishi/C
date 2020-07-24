//all functions inside math.h takes double as input and return double as o/p

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    int c;
    a = 8.2;
    b = 5.7;
    c = 3;
    printf("Remainder of %f / %d is %lf\n", a, c, fmod(a, c));//2.200000
    printf("Remainder of %f / %f is %lf\n", a, b, fmod(a, b)); //2.500000

    //e raised to xth power => double exp(double x)
    double x=1;
    printf("The exponential value of %lf is %lf\n", x + 2, exp(x + 2));


    //modf function return fractional part of number
    
    double no,fractpart,intpart;

    no=9.12345;
    fractpart=modf(no,&intpart);
    printf("Integral part = %lf\n", intpart);
    printf("Fraction Part = %lf \n", fractpart);
    return (0);
}
