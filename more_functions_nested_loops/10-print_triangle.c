#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a = size;
	int b = 0;
	int c = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < size; b++)
		{
			for (c = 0; c < a; c++)
			{
				_putchar(' ');
			}
			a--;
			for (c = 0; c < b + 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
