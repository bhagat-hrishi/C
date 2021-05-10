// C program to demonstrate working of
// difftime() This function present inside time.h header file
#include <time.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    int sec;
    time_t time1, time2;

    // Current time
    time(&time1);
    printf("\nStart time recorded ");
    for (sec = 1; sec <= 6; sec++)
        sleep(1);

    // time after sleep in loop.
    time(&time2);
    printf("\nEnd time recorded");
    printf("Difference is %.2f seconds",
           difftime(time2, time1));

    return 0;
}
