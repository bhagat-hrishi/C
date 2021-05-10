
#include<stdio.h>

int main()
{
	// Pointer to an integer
	int *p;

	// Pointer to an array of 5 integers
	int (*ptr)[5];


    //This is  array of 5 elements and this elements are pointer to integer
	int *ptr2 [5];
	//int 5 element where each element is int
	int arr[5];

	// Points to 0th element of the arr.
	p = arr;

	// Points to the whole array arr.
	ptr = &arr;

	printf("p = %p, ptr = %p\n", p, ptr);

	p++;
	ptr++;

	printf("p = %p, ptr = %p\n", p, ptr);


    //whenever a pointer to an array is dereferenced, we get the base address of the array to which it points.
	printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
                          sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
                        sizeof(ptr), sizeof(*ptr));
	return 0;
}
