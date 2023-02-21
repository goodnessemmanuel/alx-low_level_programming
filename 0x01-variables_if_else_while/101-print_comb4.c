#include <stdio.h>

/**
* main - prints unique three digit combination
* Return: 0 on success
* Description: Prints all possible combinations of different 3 digit numbers
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (j > i && k > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
