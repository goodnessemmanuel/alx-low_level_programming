#include "main.h"

/**
* _islower - implementing print_alphabet prototype
* @c: the character to check
* Return: 1 for lower or 0 for non-lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
