#include "main.h"

/**
 * print_number - prints an integer.
 * @n: counter to set the value to print
 * return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -1 * n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
