#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
