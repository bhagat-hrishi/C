    #include<stdio.h>
    int main(){
    /*
    %n is a special format specifier which instead of printing something causes printf() to load the variable pointed by
    the corresponding argument with a value equal to the number of characters that have been printed by printf() before the occurrence of %n.
    */
    //following not working in codeblock
    int no;
    printf("Hi %n 1234567 After percent nothing is stored inside no",&no);
    printf("\nValue of no: %d",no);

    /*
    Error
    int no1,no2;
printf("1234 %n 1234567 %n",&no1,%no2);
printf("\nValue of no1: %d  and no2:  %d",no1,no2);
    */

    //ways to print %
    printf("\nprinting % : %%");
    printf("\nprinting % : %c",'%');
    printf("\nprinting % : %s","%");

    }
