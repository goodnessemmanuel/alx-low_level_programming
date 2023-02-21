#include <stdio.h>

/**
* main - prints lower case
* Return: 0 on success
* Description: Program prints lowercase alphabet in reverse
*/
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;

	}
	putchar('\n');
	return (0);
}
