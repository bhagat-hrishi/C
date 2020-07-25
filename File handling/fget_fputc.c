#include<stdio.h>
#include<string.h>
int main()
{
/*
fgetc() is used to obtain input from a file single character at a time.
After reading the character, the file pointer is advanced to next character.
If pointer is at end of file or if an error occurs EOF file is returned by this function.

int fgetc(FILE *pointer)
*/
/*
fputc() is used to write a single character at a time to a given file.
It writes the given character at the position denoted by the file pointer and then advances the file pointer.
This function returns the character that is written in case of successful write operation else in case of error EOF is returned.

int fputc(int char, FILE *pointer)
*/
    char name[128];
    printf("\nEnter your name: ");
    scanf("%s",name);

    FILE *fp;

    fp=fopen("putc_getc.txt","w");
    //writing to file
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        //fputc give return character written to file
        printf("\nwritten: %c",fputc(name[i],fp));
    }
    printf("\nyour data is written\n");
    fclose(fp);

    fp=fopen("putc_getc.txt","r");
    char ch;
    printf("\ndata from file: ");
    while(1)
    {
        ch=fgetc(fp);
        if(feof(fp))//end of file
            break;
        printf("%c",ch);
    }
    fclose(fp);

}
