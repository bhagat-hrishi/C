#include<stdio.h>

void fun()
{
    printf("\nHello");
}
int main()
{
    void (*fun_ptr)()=fun;

    printf("%d %d %d ",fun_ptr,&fun_ptr,*fun_ptr);

    printf("\n&fun: %p and fun: %p",&fun,fun);

}
