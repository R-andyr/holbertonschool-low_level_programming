#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int print;

	for (print = 1; print <= n; print++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
