#include <stdio.h>

/**
 * puts2 - Print alternate char starting with first char
 * @str: pointer to first char in the string
 * Return: void
 */
void puts2(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		putchar(*(str + len));
		len += 2;
	}
	putchar('\n');
}
