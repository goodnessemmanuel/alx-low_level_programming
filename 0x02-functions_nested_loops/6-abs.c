#include "main.h"

/**
* _abs - prints absolute value
* @n: the number to check
* Return: result according to the undely description
* Description: computes the absolute value of an integer
*/
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
