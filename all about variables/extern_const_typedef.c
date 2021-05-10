
#include <stdio.h>

// declaring and initializing an extern variable
extern int x = 9;

// declaring and initializing a global variable
// simply int z; would have initialized z with
// the default value of a global variable which is 0
int z=10;

// using typedef to give a short name to long long int
// very convenient to use now due to the short name
typedef long long int LL;

// function which prints square of a no. and which has void as its
// return data type
void calSquare(int arg)
{
	printf("The square of %d is %d\n",arg,arg*arg);
}

// Here void means function main takes no parameters
int main(void)
{
	// declaring a constant variable, its value cannot be modified
	const int a = 32;

	// declaring a char variable
	char b = 'G';

	// telling the compiler that the variable z is an extern variable
	// and has been defined elsewhere (above the main function)
	extern int z;

	LL c = 1000000;

	printf("Hello World!\n");

	// printing the above variables
	printf("This is the value of the constant variable 'a': %d\n",a);
	printf("'b' is a char variable. Its value is %c\n",b);
	printf("'c' is a long long int variable. Its value is %lld\n",c);
	printf("These are the values of the extern variables 'x' and 'z'"
	" respectively: %d and %d\n",x,z);

	// value of extern variable x modified
	x=2;

	// value of extern variable z modified
	z=5;

	// printing the modified values of extern variables 'x' and 'z'
	printf("These are the modified values of the extern variables"
	" 'x' and 'z' respectively: %d and %d\n",x,z);

	// using a static variable
	printf("The value of static variable 'y' is NOT initialized to 5 after the "
			"first iteration! See for yourself :)\n");

	while (x > 0)
	{
		static int y = 5;
		y++;
		// printing value at each iteration
		printf("The value of y is %d\n",y);
		x--;
	}

	// print square of 5
	calSquare(5);

	printf("Bye! See you soon. :)\n");

	return 0;
}
