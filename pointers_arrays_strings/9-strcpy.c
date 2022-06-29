#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: string to be copied
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = src[j];

	return (dest);
}
