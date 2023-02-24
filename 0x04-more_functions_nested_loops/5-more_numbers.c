#include "main.h"

/**
 * more_numbers - prints 0 to 14 digits 10 times.
 * Return: void.
 */
void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{

			if (n / 10 >= 1)
				putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		}
		putchar('\n');
	}
}
