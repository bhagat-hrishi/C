// C program to demonstrate importance
// of typedef over #define for data types
#include <stdio.h>
typedef char *ptr;//typedef processe at compile time and end withd ;
#define PTR char *//This is prcocessed at preprocessor time and not end with ;
int main()
{
    ptr a, b, c;
    PTR x, y, z;
    printf("\n\nsizeof a:%zu\n", sizeof(a));
    printf("sizeof b:%zu\n", sizeof(b));
    printf("sizeof c:%zu\n", sizeof(c));
    printf("sizeof x:%zu\n", sizeof(x));
    printf("sizeof y:%zu\n", sizeof(y));
    printf("sizeof z:%zu\n", sizeof(z));
    /*
ptr expanded declaration as char *x, * y, *z;
whereas PTR expanded as char *x, y, z; <--here * is associated only with the x
So, Define acted just as a place holder whereas, typedef did a smart job of initializing each variable as per the defined type which is char*
    */



    return 0;
}
