#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    /*char s[10] = "My School";*/
    char h[11] = "Holberton!";

    printf("%s\n", h);
    rev_string(h);
    printf("%s\n", h);
    return (0);
}
