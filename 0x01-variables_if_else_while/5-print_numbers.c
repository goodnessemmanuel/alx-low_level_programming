#include <stdio.h>

/**
* main - prints digit
* Return: 0 on success
* Description: Program to print single digits 0 to 9
*/
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;

	}
	putchar('\n');
	return (0);
}
