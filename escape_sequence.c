// C program to illustrate
// \b escape sequence
#include <stdio.h>
int main(void)
{

	// \b - backspace character transfers
	// the cursor one character back with
	// or without deleting on different
	// compilers.
	printf("Hello Geeks\b\b\b\bF");

    printf("\n");
	// Here we are using \t, which is
    // a horizontal tab character.
    // It will provide a tab space
    // between two words.
    printf("Hello \t GFG");

    printf("\n");
    // Here we are using \r, which
    // is carriage return character.
    //moves to beginning of line
    printf("Hello fri \r ends");

    printf("\n");

    // Here we are using \v, which
    // is vertical tab character.
    printf("Hello friends");

    printf("\v Welcome to GFG");
	return (0);
}

