#include<stdio.h>
#define generic_macro(t) _Generic( (t) , char: 1,int: 2,float:3,double:4, default: 5)

#define INC(P) ++P

int main()
{
    printf("\nfor char :%d",generic_macro('a'));
    printf("\nfor int :%d", generic_macro(90));
    printf("\nfor double: %d",generic_macro(3.4));
    printf("\ndefault for string: %d",generic_macro("Hrishi"));

    char *p = "Geeks";
    int x = 10;
    printf("\n%s", INC(p));
    printf("\n%d", INC(x));
}