#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: is the string
 * Return: void
 */

void print_rev(char *s)
{
	int I;

	for (I = 0; s[I] != '\0'; ++I)
	{
	for (I--; I >= 0; I--)
		_putchar(*(s + I));
	}
	_putchar('\n');
}
