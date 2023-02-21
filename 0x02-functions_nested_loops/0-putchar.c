#include "main.h"

/**
* main - prints '_putchar_
* Return: (0) on success
* Description: Prints _putchar to the standard output
*/
int main(void)
{
	char *ctp = "_putchar";

	while (*ctp)
	{
		_putchar(*ctp);
		ctp++;

	}
	_putchar('\n');
	return (0);
}
