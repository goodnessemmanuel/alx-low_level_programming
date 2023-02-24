#include "main.h"
#include <stdio.h>

/**
 * _isupper - Test for uppercase character.
 * @c : character to check
 * Return: Always 1 or 0 if character is not uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);

	return (0);
}
