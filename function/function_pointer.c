#include<stdio.h>

//normal function taking int as argument
void fun(int a)
{
    printf("\nI am fun function: %d",a);
}
int add(int a,int b)
{
    return a+b;
}

void i_Call_Function_Add(int a,int b,int (*p)(int ,int))
{
    printf("\nAddition: %d",p(a,b));
}

int main()
{
    //declaring pointer to function
    void (*fun_ptr1)(int)=&fun;

    void (*fun_ptr2)(int)=fun;

    //calling function
    fun_ptr1(90);
    printf("\n-------------------\n");
    (*fun_ptr1)(78);
    printf("\n-------------------\n");
    fun_ptr2(20);


    //Dynamic memory allocation is not possible for function pointer
    // Not useful expression
    void (*pfData) (int)  = malloc(sizeof(pfData));

    printf("\n-------------------\n");
    if(fun_ptr1==fun_ptr2)
        printf("\npointers are equal");
    else
        printf("\npointers are not equal");

    //passing function pointer as argument to function
    int (*add_ptr)(int ,int)=add;
    i_Call_Function_Add(45,50,add_ptr);

}


