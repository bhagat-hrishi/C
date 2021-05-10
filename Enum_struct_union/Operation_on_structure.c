
#include <stdio.h>

struct Point {
int x;
int y;
};
/*
In C, the only operation that can be applied to struct variables is assignment.
Any other operation (e.g. equality check) is not allowed on struct variables.
*/
int main()
{
        struct Point p1 = {10, 20};
        struct Point p2 = p1; // works: contents of p1 are copied to p2
        printf(" p2.x = %d, p2.y = %d", p2.x, p2.y);
        if(p1==p2)//error
        {
            printf("Both are equal");
        }
        getchar();
return 0;
}
