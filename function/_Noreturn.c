
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *p=malloc(sizeof(int));
    printf("%d\n",*p);
    int *a=calloc(4,sizeof(int));
    for(int i=0;i<4;i++)
        printf("%d ",a[i]);


	return 0;
}

