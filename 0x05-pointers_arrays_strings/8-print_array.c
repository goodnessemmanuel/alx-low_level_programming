#include <stdio.h>

/**
 * print_array - Print n array elements.
 * @a: pointer to first char in the array
 * @n: number of items to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int t = 0;

	while (t < n)
	{
		printf("%d", a[t]);
		if (t < n - 1)
			printf(", ");
		t++;
	}
	putchar('\n');
}
