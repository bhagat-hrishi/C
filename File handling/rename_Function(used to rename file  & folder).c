#include<stdio.h>
int main()
{
/*
If new_name is the name of an existing file in the same folder then the function may either fail or override the existing file,
depending on the specific system and library implementation.

int rename (const char *old_name, const char *new_name);
old_name : Name of an existing file to be renamed.
new_name : String containing new name of the file.

return if file rename is success function return 0
if fail then non zero value is returned

*/

    //changing name of file
    char old_name[]="abc.txt";
    char new_name[]="new.txt";

    if(rename(old_name,new_name)==0)
    {
        printf("\nname of file changed");
    }
    else
        printf("\nError");

    //changing name of file
    char old_folder[]="old_folder";
    char new_folder[]="new_folder";

    if(rename(old_folder,new_folder)==0)
    {
        printf("\nname of folder changed");
    }
    else
        printf("\nError");

}
