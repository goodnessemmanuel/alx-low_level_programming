#include <stdio.h>

/**
* main - prints alphabeths
* Return: 0 on success
* Description: Prints alphabeth lowercase and then uppercase
*/
int main(void)
{
	char c;
	char u;

	c = 'a';
	u = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;

	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;

	}
	putchar('\n');
	return (0);
}
