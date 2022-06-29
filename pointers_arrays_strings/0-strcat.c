#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	for (c = 0; dest[c] != '\0'; c++)
	{
	}
	for (c2 = 0; src[c2] != '\0'; c2++)
	{
		dest[c] = src[c2];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
