#include<stdio.h>
#include<stdarg.h>

//no of argument to function and last parameter is eclipse
int sum(int n,...)
{
    //va_list store variable variable list
    va_list a_list;
    //va_start is a macro which accepts two arguments,
    // a va_list and the name of the variable that directly precedes the ellipsis ("...").
    va_start(a_list,n);

    int ans=0;
    for(int i=0;i<n;i++)
    {
        //va_arg ( a_list,int) will return the next argument, assuming it exists, in the form of an int
        ans+=va_arg(a_list,int);
    }
    va_end(a_list);//clean up list
    return ans;


}
int main()
{
    printf("\nSum: %d",sum(2,1,4));
    printf("\nSum: %d",sum(4,3,4,5,6));
}

void func (int, int);

int i = 2;
func (i++, i++);
