#include <stdio.h>

/**
* main - prints numbers combination
* Return: 0 on success
* Description: Program prints all possible combinations of single-digit numbers
*/
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{

			putchar(',');
			putchar(' ');
		}
		n++;

	}
	putchar('\n');
	return (0);
}
