#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: 0 as always.
 */

void print_numbers(void)
{
	int j = 0;
	while (j < 10)
	{
		_putchar('0' + j);
		j++;
	}
	_putchar('\n');
}
