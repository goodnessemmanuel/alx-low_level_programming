#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps two variable value.
 * @a : pointer to first value
 * @b : pointer to second value
 * Return: no value is returned.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
