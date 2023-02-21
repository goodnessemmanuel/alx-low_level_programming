#include "main.h"

/**
* main - prints alphabet_
* Return: (0) on success
* Description: call custom function
*/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabeth - implementing print_alphabet prototype
* Retun: void
* Description: Prints all small letters of the alphabet
*/
void print_alphabet(void)
{
       char a = 'a';

       while (a <= 'z')
       {
               _putchar(a);
               a++;

       }
       _putchar('\n');
}
