#include "main.h"

/**
* main - tests positive_or_negative function for zero input
* Return: 0
* Description: tests that positive_or_negative gives the
* correct output for zero
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		 printf("%d is positive\n", i);
	else
		 printf("%d is zer0\n", i);
        return;
}
