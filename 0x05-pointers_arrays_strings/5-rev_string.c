#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: pointer to first char in the string
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	char *sm = s;
	int temp, i;

	len = 0;
	while (*sm != '\0')
	{
		sm++;
		len++;
	}

	/*len = len - 1;*/
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
