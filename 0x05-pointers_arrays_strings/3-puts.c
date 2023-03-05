#include <stdio.h>

/**
 * _puts - Prints a string.
 * @str: pointer to first element of char array
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
