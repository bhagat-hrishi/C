#include<stdio.h>

//case label should be integer constant expression
int main()
{
    int a;
    switch(9)
    {
        //error require constant integer expression
        case a:
            break;
    }

    const int b=0;
    switch(0)
    {
        //error require constant integer expression
    case b:
            break;
    }

    switch(90)
    {
        //valid
    case 10:
            break;
    }
}
