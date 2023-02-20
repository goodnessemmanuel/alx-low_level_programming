#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - random negative or positiv e
*Return: 0 if success
*Description: Use number to determine negative or positive or zero.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 1)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
