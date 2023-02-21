#include <stdio.h>

/**
* main - prints random number last digit
* Return: 0 on success
* Description: Program retuns last digit of num
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}
