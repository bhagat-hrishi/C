#include<stdio.h>

int main()
{
    // simple print on stdout
    //int printf(const char* str, ...);
    printf("\nhello geeksquiz\n");

    //int sprintf(char *str, const char *string,...);
    //String print function instead of printing on console store it on char buffer which are specified in sprintf

    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);
    printf("%s",buffer);


    //fprintf
    int i, n=2;
    char str[50];

    //open file sample.txt in write mode
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }

    for (i=0; i<n; i++)
    {
        puts("\nEnter a name: ");
        gets(str);
        fprintf(fptr,"%d.%s\n", i, str);
    }
    fclose(fptr);


    //fprint can also used to print data on stout
    char *myinfo = "Hrishi";
    fprintf(stdout, "\nprinting data by fprintf: %s\n", myinfo);

    return 0;
}
