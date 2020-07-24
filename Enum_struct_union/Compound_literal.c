#include<stdio.h>
struct Point
{
   int x, y;
};


// Utility function to print point
void printPoint(struct Point p)
{
   printf("%d, %d", p.x, p.y);
}

int main()
{

    // Compound literal (an array is created without
   // any name and address of first element is assigned
   // to p.  This is equivalent to:
   // int arr[] = {2, 4, 6};
   // int *p = arr;
    int *p=(int []){2,3,4};

    printf("%d %d %d", p[0], p[1], p[2]);

    /*
    Compound literals feature allows us to create unnamed objects with given list of initialized values
    */

    // Calling printPoint() without creating any temporary
   // Point variable in main()
    printPoint((struct Point){2, 3});

     /*  Without compound literal, above statement would have
       been written as
       struct Point temp = {2, 3};
       printPoint(temp);  */

}
