
//all file realted function present inside stdio.h
#include<stdio.h>

int main()
{
    FILE *fp;

    //fopen function used to open file in different modes
    //syntax fopen("path",mode)
    /*
    on success give address of file
    on fail give null
    */
    int a;
    fp = fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("Error ");
        exit(1);
    }
    printf("\nEnter no: ");
    scanf("%d",&a);

    //Writing content to file
    //fprintf(FILE*,const char *...)
    fprintf(fp,"%d",a);//file pointer , content to write

    fclose(fp);

    //r+ mode open in both read and write
    fp=fopen("./abc.txt","r+");
    //reading content from file
    int myvar;
    fscanf(fp,"%d",&myvar);
    printf("\nData from file: %d",myvar);
    fclose(fp);
}
