#include<stdio.h>
/*
The remove function in C/C++ can be used to delete a file.
 The function returns 0 if files is deleted successfully, other returns a non-zero value.
*/
int main()
{
    printf("Enter name of file to remove: ");
    char name[128];
    scanf("%s",name);

    if(remove(name)==0)
        printf("\nDeleted");
    else
        printf("\nError in deletion");
}
