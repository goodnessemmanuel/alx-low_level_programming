#include <stdio.h>
#include "main.h"

/**
* main - prints '_putchar_
* Return: (0) on success
* Description: Prints _putchar to the standard output
*/
int main(void)
{

	int r;
	print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
/*	r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);

 print_alphabet_x10();
    r = _islower('H');
    	_putchar(r + '0');
    r = _islower('o');
    	_putchar(r + '0');
    r = _islower(108);
    	_putchar(r + '0');
   	 _putchar('\n');
	 
	r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');

	r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');*/

	return (0);
}
