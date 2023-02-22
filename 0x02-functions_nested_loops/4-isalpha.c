#include "main.h"

/**
* _isalpha - implementing print_alphabet prototype
* @c: the character to check
* Return: 1 for alphabet or 0 for non-alphabet
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
