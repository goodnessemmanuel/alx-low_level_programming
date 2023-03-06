#include <stdio.h>

/**
 * puts_half - Print last half of string.
 * @str: pointer to first char in the string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int t = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		t = len / 2;
	else
		t = (len - 1) / 2;

	for (; str[t] != '\0'; t++)
	{
		putchar(str[t]);
	}

	putchar('\n');

}
