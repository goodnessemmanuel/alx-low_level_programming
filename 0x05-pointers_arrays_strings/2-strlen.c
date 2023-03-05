/**
 * _strlen - Computes length of a string.
 * @s: pointer to first element of char array
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
