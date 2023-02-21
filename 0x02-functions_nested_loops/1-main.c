#include <stdio.h>

/**
* print_alphabeth - implementing print_alphabet prototype
* Retun: void
* Description: Prints all small letters of the alphabet
*/
void print_alphabet()
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;

	}
	putchar('\n');
}
