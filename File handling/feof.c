#include<stdio.h>
#include<string.h>
int main()
{

//C provides feof() which returns non-zero value only if end of file has reached, otherwise it returns 0.

    FILE *fp;
    //open in write mode
    fopen("ok.txt","w");

    char ch[128];
    printf("\nEnter name :");
    scanf("%s",ch);

    int n=strlen(ch);
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        fputc(ch[i],fp);
    }

    fclose(fp);

    fp=fopen("ok.txt","r");
    //int feof(FILE *stream)
    char tmp;
    printf("\ndata from file: ");
    while(1)
    {
        tmp=fgetc(fp);
        if(feof(fp))//end of file
            break;
        printf("%c",tmp);
    }

    fclose(fp);
}
