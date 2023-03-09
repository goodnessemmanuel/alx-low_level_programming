#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with constant char.
 * @s: address of target memory
 * @b: constant character to fill memory with
 * @n: total intended size of memory in integer
 * Return: no value is returned.
 * Description: Function fills the first n bytes of
 * the memory area pointed to by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}
