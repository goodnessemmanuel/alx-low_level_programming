#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	puts((n > 1)? "is positive" : (n < 1)? "is negative" : "is zero" );
	return (0);
}
