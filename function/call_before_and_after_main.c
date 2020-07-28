#include<stdio.h>

//call before and after main
void start(void) __attribute__((constructor));
void end(void) __attribute__((destructor));

void start(void)
{
    printf("\nBefore main");
}
void end(void)
{
    printf("\nAfter main");
}
int main()
{
    printf("\nI am inside main");
}
