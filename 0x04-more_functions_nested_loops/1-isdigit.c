#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Test for digit character.
 * @c : number to check
 * Return: Always 1 or 0 if character is not a digit.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);

	return (0);
}
