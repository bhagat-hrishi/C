/*
char str[];
puts(str)  function used to print string generally it also move cursor to next line

If you do not want the cursor to be moved to next line, then you can use following variation of puts().
fputs(str,stdout)

*/
#include<stdio.h>
int main()
{

    //move cursor to next line
    puts("I am 1 st line");
    puts("I am on 2nd line");


    printf("\n");

    //not move cursor to next line
    fputs("I am 1st line",stdout);
    fputs(" I am on same line",stdout);


    printf("\n");
// % is intentionally put here to show side effects of using printf(str)

    puts("Hrishikesh%sBhagat%s");
    printf("Hrishikesh%sBhagat%s");





}
