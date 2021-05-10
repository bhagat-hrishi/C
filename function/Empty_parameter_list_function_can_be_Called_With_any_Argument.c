#include<stdio.h>
#include<stdbool.h>//for true and false
void fun()
{
    static int a=0;
    a++;
    printf("\nI am called for  %d time ",a);
}
int main()
{
    fun();
    fun("Hrishi");
    fun(12,3,34,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,8,5,55);
    fun(1,"Hrishi",true,false,90.3,4.5f);

}
