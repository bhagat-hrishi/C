
#include <stdio.h>
/*
It means that C compiler implicitly adds __func__ in every function so
that it can be used in that function to get the function name.
*/
void foo(void)
{
printf("\n%s",__func__);
}
void bar(void)
{
printf("\n%s",__func__);
}

/*
Since C standard says compiler implicitly defines __func__ for each function as the function-name,
 we should not defined __func__ at the first place.
 You might get error but C standard says “undefined behaviour” if someone explicitly defines __func__ .
*/
//int __func__=90;//error after removing this no error
int main()
{
foo();
bar();
printf("\n%s",__func__);

printf("\nIn file:%s, function:%s() and line:%d",__FILE__,__func__,__LINE__);
return 0;
}
