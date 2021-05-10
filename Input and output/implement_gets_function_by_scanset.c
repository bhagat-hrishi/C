#include<stdio.h>
int main()
{
    char normal [128],scan_set[128];

    printf("\nEnter string: ");
    //give line as input with space
    scanf("%s",normal);
    printf("\nEntered string: %s ",normal);

    fflush(stdin);
    printf("\nEnter string: ");
    //give line as input with space
    scanf("%[^\n]s",scan_set);
    printf("\nEntered string: %s ",scan_set);
}
