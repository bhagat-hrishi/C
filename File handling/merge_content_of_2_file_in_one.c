#include<stdio.h>
#include<string.h>
#include<stdlib.h>

///??????????????????error in code
/*
name is stored in 1st file
surname is store in 2nd file
full name is store in 3rd file
*/
int main()
{


    FILE *fp1=fopen("name.txt","w");
    if(fp1==NULL)
    {
        printf("\nError ");
        exit(1);
    }
    char name[128];

    //take input
    printf("\nEnter name: ");
    scanf("%s",name);

    //write to file
    int len=strlen(name);
    for(int i=0;i<len;i++)
        printf("\nwritten %c to file",fputc(name[i],fp1));

    fclose(fp1);


    fflush(stdin);


    FILE *fp2=fopen("surname.txt","w");
    if(fp2==NULL)
    {
        printf("\nError ");
        exit(1);
    }
    char surname[128];

    //take input
    printf("\nEnter surname: ");
    scanf("%s",surname);
