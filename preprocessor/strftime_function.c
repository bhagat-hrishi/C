/*
strftime() is a function in C which is used to format date and time. It comes under the header file time.h, 

When we are making a software/application
which will output the current time and most important in many different formats on the user’s demand.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define Size 50

int main()
{
    time_t t;
    struct tm *tmp;
    char MY_TIME[Size];
    time(&t);

    //localtime() uses the time pointed by t ,
    // to fill a tm structure with the
    // values that represent the
    // corresponding local time.

    tmp = localtime(&t);

    // using strftime to display time
    strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp);

    printf("Formatted date & time : %s\n", MY_TIME);
    return (0);
}
