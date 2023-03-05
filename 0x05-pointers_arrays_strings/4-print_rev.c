#include <stdio.h>

/**
 * print_rev - Prints a string in reverse order
 * @s: pointer to first char in the string
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	char *sm = s;

	len = 0;
	while (*sm != '\0')
	{
		sm++;
		len++;
	}

	len = len - 1;
	while (len >= 0)
	{
		putchar(*(s + len));
		len--;
	}
	putchar('\n');
}
