#include <stdio.h>
/*
case low ... high://syntax
case A ... Z://valid

case 1 ... 5://valid
case 5 ... 1://invalid
*/
int main()
{
	int arr[] = { 1, 5, 15, 20 };

	for (int i = 0; i < 4; i++)
	{
		switch (arr[i])
		{
		case 1 ... 6:
			printf("%d in range 1 to 6\n", arr[i]);
			break;
        //duplicate case value
        case 4 ... 7:
            printf("from 4 to 7");
            break;
		case 19 ... 20:
			printf("%d in range 19 to 20\n", arr[i]);
			break;
        //if low value greater than high value compiler warning
        case 30 ... 8:
            printf("In 11 and 8");
            break;
		default:
			printf("%d not in range\n", arr[i]);
			break;
		}
	}
	return 0;
}
