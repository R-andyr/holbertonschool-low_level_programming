#include "main.h"

/**
 * _memcpy - function copies n bytes from memory
 * area src to memory area dest.
 * @dest: Point to char.
 * @src: Point to char
 * @n: Number od bytes.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
