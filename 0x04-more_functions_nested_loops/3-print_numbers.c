#include "main.h"

/**
 * print_numbers - prints 0 to 9.
 * Return: void.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
