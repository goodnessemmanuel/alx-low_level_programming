#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Test for uppercase character.
 * @c : number to check
 * Return: Always 1 or 0 if character is not uppercase.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);

	return (0);
}
