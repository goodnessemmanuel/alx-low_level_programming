#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print to all integers within range
* @n: integer x
* Return: void
* Description: Numbers must be separated by a comma,
* followed by a space Numbers should be printed in order
* The first printed number should be the number passed
* to your function The last printed number should be 98
*/
void print_to_98(int n)
{
	printf("%d%s", n, n == 98 ? "\n" : ", ");
	if (n < 98)
		print_to_98(n = n + 1);
	else if (n > 98)
		print_to_98(n = n - 1);
	else
		return;
}
