#include "main.h"

/**
* print_last_digit - last digit
* @n: the number to check
* Return: result according to the undely description
* Description: prints the last digit of n
*/
int print_last_digit(int n)
{
	int ldt = n % 10;

	if (ldt < 0)
		ldt = -1 * ldt;
	_putchar(ldt + '0');
	return (ldt);
}
