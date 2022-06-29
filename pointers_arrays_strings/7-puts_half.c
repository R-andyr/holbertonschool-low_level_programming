#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n = i;
	}
	n = (n - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
