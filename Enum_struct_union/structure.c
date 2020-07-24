#include<stdio.h>
struct mystruct
{
    /*
    Structure members cannot be initialized with declaration
    when a datatype is declared, no memory is allocated for it.
     Memory is allocated only when variables are created.
    */
    int a=0;//error
    float b;
    double d;
    char ch[4];

    //static variable error
    static int i_am_static;


}var1;//declare variable
int main()
{
    struct mystruct var2;//declare variable

    //init structure variable by { }
    struct mystruct var3={2,4.5f,6.7,{'a', 'b','c','d'}};

    printf("%d %f %lf",var3.a,var3.b,var3.d);

    //Pointer to structure
    struct mystruct *ptr=&var3;

    printf("%d %f %lf",ptr->a,ptr->b,ptr->d);






    struct Point
    {
        int x, y, z;
    };

    //Designated intialization of structure variables allow only in "C" and "not in C++"
    struct Point p1 = {.y = 0, .z = 1, .x = 2};
    struct Point p2 = {.x = 20};
}
