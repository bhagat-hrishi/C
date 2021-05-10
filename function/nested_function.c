//https://stackoverflow.com/questions/2608158/nested-function-in-c
//https://stackoverflow.com/questions/7319325/function-inside-function-in-c

// C program of nested function
// with the help of gcc extension
#include <stdio.h>
int main(void)
{
    //This is  an extension of the GNU C Compiler which allows the declarations of nested functions.
	auto int view(); // declare function with auto keyword
	view(); // calling function
	printf("Main\n");

	int view()
	{
		printf("View\n");
		return 1;
	}

	printf("GEEKS");
	return 0;
}
