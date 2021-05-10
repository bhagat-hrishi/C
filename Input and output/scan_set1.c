#include<stdio.h>
/*
1)scanset specifier represented by %[]
2)we can specify single character or range of character
3)While processing scanset, scanf will process only those characters which are part of scanset,
scanf will accept the characters , Otherwise stops scanning any further.
4)the scansets are case-sensitive.

*/
int main()
{

     char str[128];

    printf("Enter a string: ");
    scanf("%[0-9]s", str);
    //only digits are stored inside string
    //give input as 1211abc2

    printf("You entered: %s\n", str);

    //to clear buffer as here abc2 are stored inside buffer
    fflush(stdin);

    char ch[128];
    printf("\nEnter a string: ");
    //scanset will read all characters but stops after first occurrence of ‘h’
    scanf("%[^h]s", ch);
    //give input as abcHhdf
    printf("You entered: %s\n", ch);



}
