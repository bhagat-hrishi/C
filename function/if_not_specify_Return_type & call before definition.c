#include<stdio.h>
//if we does not specify return type then compiler assume int

/*
In c if we call function without decleration the compiler assume decleation is int function name()
 if declearion other than this then compiler show erroe
*/

//In C, if we do not specify a return type, compiler assumes an implicit return type as int

/*
o	Up to C90 standard, C compilers assumed the return type of the omitted function prototype as int
and to make C99 backword compatible following program will run with warning
*/
fun(int n)
{
    return n*n;
}
int main()
{
    printf("\ndefaul return type is int : %d",fun(10));

}

void fun_void()//valid
{
    printf("\nInside void");
    return;
}
int fun_int()//valid
{
    printf("\nInside int");
    return 4;
}

//error
//double fun_int()
//{
//    printf("\nInside double");
//    return 4.5;
//}
