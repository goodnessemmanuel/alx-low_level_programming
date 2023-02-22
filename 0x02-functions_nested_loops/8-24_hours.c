#include "main.h"

/**
* jack_bauer - print every minutes of the day
* Return: void
* Description: prints mins from 00:00 to 23:59
*/
void jack_bauer(void)
{
	char i;
	char j;
	char k;
	char l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
			if (i == '2' && j == '3')
				break;
		}
	}
}
