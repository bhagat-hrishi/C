
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a ='A', b ='B';
	const char *ptr = &a;

	//*ptr = b; illegal statement (assignment of read-only location *ptr)

	// ptr can be changed
	printf( "value pointed to by ptr: %c\n", *ptr);
	ptr = &b;
	printf( "value pointed to by ptr: %c\n", *ptr);




	char a1 ='A', b1 ='B';
    char *const ptr1 = &a1;
    printf( "Value pointed to by ptr: %c\n", *ptr1);
    printf( "Address ptr is pointing to: %d\n\n", ptr1);

    //ptr1 = &b1; illegal statement (assignment of read-only variable ptr)

    // changing the value at the address ptr is pointing to
    *ptr1 = b1;
    printf( "Value pointed to by ptr: %c\n", *ptr1);
    printf( "Address ptr is pointing to: %d\n", ptr1);



    char a2 ='A', b2 ='B';
    const char *const ptr2 = &a2;

    printf( "Value pointed to by ptr: %c\n", *ptr2);
    printf( "Address ptr is pointing to: %d\n\n", ptr2);

    // ptr = &b; illegal statement (assignment of read-only variable ptr)
    // *ptr = b; illegal statement (assignment of read-only location *ptr)
}

