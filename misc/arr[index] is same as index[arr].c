//https://stackoverflow.com/questions/381542/with-arrays-why-is-it-the-case-that-a5-5a
#include<stdio.h>
int main()
{
	int arr[10];
	arr[0] = 1;
	printf("\n%d", 0[arr] );
	printf("\n%d",arr[0]);
	printf("\n%d",*(arr+0));
	printf("\n%d",*arr);

	return 0;
}
