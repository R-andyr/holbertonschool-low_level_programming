#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: is the pointer to the string
 * Return:void
 */

void puts2(char *str)
{
	int i;

	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[i]);
		}
		k++;
	}
	_putchar('\n');
}
