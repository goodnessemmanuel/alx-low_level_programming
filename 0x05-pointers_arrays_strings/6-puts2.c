#include <stdio.h>

/**
 * puts2 - Print alternate char starting with first char
 * @str: pointer to first char in the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
