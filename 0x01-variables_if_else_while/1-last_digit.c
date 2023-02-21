#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - prints random number last digit
* Return: 0 on success
* Description: Program retuns last digit of num
*/
int main(void)
{
	int n;
	int ldt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldt = n % 10;
	printf("Last digit of %d is %d ", n, ldt);
	if (ldt > 5)
		printf("and is greater than 5\n");
	else if (ldt == 0)
		printf("and is 0\n");
	else if (ldt < 6 && ldt != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
