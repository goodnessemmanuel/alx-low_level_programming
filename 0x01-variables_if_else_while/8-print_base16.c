#include <stdio.h>

/**
* main - prints base 16 nums
* Return: 0 on success
* Description: Prints all numbers of base16
*/
int main(void)
{
	char c;
	char u;

	c = '0';
	u = 'a';
	while (c <= '9')
	{
		putchar(c);
		c++;

	}

	while (u <= 'f')
	{
		putchar(u);
		u++;

	}
	putchar('\n');
	return (0);
}
