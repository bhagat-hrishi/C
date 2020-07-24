#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w");
    fclose(fp);
}
