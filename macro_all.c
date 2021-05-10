#include<stdio.h>
#define INCREMENT(x) ++x
#define MULTIPLY(a, b) a*b
#define merge(a, b) a##b
//    The macros can be written in multiple lines using ‘\’.
//    The last line doesn’t need to have ‘\’.
#define hrishi(n) for(int i=0;i<n;i++)\
        {\
            printf("\nWCE ");\
            printf("Computer Science");\
        }

#define m 5
int main()
{
    //the macros can take function like arguments,
    //the arguments are not checked for data type.
    char *ptr = "GeeksQuiz";
    int x = 10;
    printf("%s  ", INCREMENT(ptr));
    printf("%d", INCREMENT(x));

    printf("\n");
    // The macro is expended as 2 + 3 * 3 + 5, not as 5*8
    // The macro arguments are not evaluated before macro expansion.
    printf("%d", MULTIPLY(2+3, 3+5));

    printf("\n");
    // The tokens passed to macros can be concatenated using operator ## called
    printf("%d ", merge(12, 34));

    printf("\n");
    hrishi(5);

    printf("\nOld value of m :%d",m);

    //Preprocessor doesn't give any error if we redefine a preprocessor directive.
    #define m 123

    printf("\nNew value of m after again defining pre-processor :%d",m);

}

/*
try to understand this program
#define ll long long
#include<stdio.h>
#define add(a,b) a##b
int main()
{
     int ap=12;
    printf("%d",add(a , p));
}
*/
