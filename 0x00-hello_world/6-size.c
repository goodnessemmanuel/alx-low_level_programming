#include <stdio.h>
/**
* main - prints the size of various datatypes
*
* Return: 0 when program is Success
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(e));
	return (0);
}
