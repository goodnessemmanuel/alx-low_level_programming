#include <stdio.h>

/**
 * _strcpy - Copy string including null terminator.
 * @src: pointer to first char of string to copy
 * @dest: destination to copy string to
 * Return: char string copied
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	return (dest);
}
