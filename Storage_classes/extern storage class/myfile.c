#include<stdio.h>
#include"myheader.h"

//we are telling compiler that this variable somewhere else and not is same block
extern int a;
int main()
{
    printf("%d",a);

}
