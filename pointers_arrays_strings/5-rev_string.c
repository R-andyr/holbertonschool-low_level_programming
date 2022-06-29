#include "main.h"

/**
 * rev_strin - reverses a string.
 * @s: pointer to the string that will be reversed
 * Return: void.
 */

void rev_string(char *s)
{
	char *end = s;

	char J;

	if (s)
	{
		while (*end)
		{
			++end;
		}
		--end;
	while (s < end)
	{
		J = *s;
		*s = *end;
		*end = J;
		s++;
		end--;
	}
	}
}
