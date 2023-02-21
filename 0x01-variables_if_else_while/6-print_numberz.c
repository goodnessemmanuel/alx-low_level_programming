#include <stdio.h>

/**
* main - prints digit
* Return: 0 on success
* Description: Program to print single digits 0 to 9 without chars
*/
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;

	}
	putchar('\n');
	return (0);
}
