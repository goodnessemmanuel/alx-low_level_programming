#include <stdio.h>

/**
* main - prints alphabets
* Return: 0 on success
* Description: Program to print alphabet btw q and e
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}
