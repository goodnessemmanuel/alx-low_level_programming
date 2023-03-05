/**
 * _puts - Prints a string.
 * @str: pointer to first element of char array
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
