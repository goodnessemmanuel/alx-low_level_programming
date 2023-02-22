#include "main.h"

/**
* times_table - print 9 times table
* Return: void
*/
void times_table(void)
{
	int i;
	int j;
	int times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			if (times <= 9)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (times <= 9 && i * (j + 1) <= 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
