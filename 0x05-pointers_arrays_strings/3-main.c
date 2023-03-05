#include "main.h"

/**
* main - prints '_putchar_
* Retun: 0 on success
* Description: Prints _putchar to the standard output
*/
int _putchar(char *c)
{
	putchar(*c);
	return (0);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
