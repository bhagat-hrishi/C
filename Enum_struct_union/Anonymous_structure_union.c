#include<stdio.h>
struct mystruct
{
    struct
    {
        int no;
    };
};
union myunion
{
    union
    {
        int var;
    };
};
/*
C++ implementations don’t allow to anonymous struct/union to have private or protected members, static members, and functions.
*/
int main()
{
   struct mystruct var1;
    var1.no=320;
    printf("\nvalue for structure: %d",var1.no);

    union myunion var2;
    var2.var=132;
    printf("\nvalue for union: %d",var2.var);


}
