#include "main.h"

/**
* print_alphabet_x10 - print alphabets 10x
* Retun: void
* Description: Prints all small letters of the alphabet
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;

		}
		_putchar('\n');
		i++;
	}
}
