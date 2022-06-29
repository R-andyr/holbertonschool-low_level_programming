#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count, count2;

	for (count = 0; dest[count] != '\0'; count++)
	{
	}
	for (count2 = 0; src[count2] != '\0'; count2++)
	{
		dest[count] = src[count2];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
