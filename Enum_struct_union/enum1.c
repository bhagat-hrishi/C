#include<stdio.h>
#include<stdbool.h>

enum week
{
    Mon, Tue, Wed, Thur, Fri, Sat, Sun
}var1;//declaring variable var1

int main()
{
    //declare variable var2
    enum week var2;

    var1=Mon;
    var2=Tue;
    printf("%d  %d",var1,var2);

    printf("\n\nIf we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0\n\n");
    for(int i=Mon;i<=Sun;i++)
        printf("%d ",i);

    //2 enum can have same values
    enum State {Working = 1, Failed = 0, Freezed = 0};

    printf("\n%d  %d ",Failed,Freezed);

    /*We can assign values to some name in any order.
     All unassigned names get value as value of previous name plus one.
    */

    enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};

    printf("\n\n%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);

    /*
    The value assigned to enum names must be some integeral constant,
    i.e., the value must be in range from minimum possible integer value to maximum possible integer value
    */

    enum myenum
    {
        //first=2.3,/*error*/,
        second=false,//valid
        third='a'//valid
    };

    /*
    All enum constants must be unique in their scope.
     For example, the following program fails in compilation.
    */


    enum state  {working, failed};
    enum result {failed, passed};

}


