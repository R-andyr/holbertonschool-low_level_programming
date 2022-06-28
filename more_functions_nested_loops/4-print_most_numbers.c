#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0 as always.
 */

void print_most_numbers(void)
{
	int j = 0;

	while (j <= 9)
	{
		if (j != 2 && j != 4)
		{
		_putchar('0' + j);
		}
		j++;
	}
	_putchar('\n');
}
