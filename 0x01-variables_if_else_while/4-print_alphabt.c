#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char j;
	for (j = 'a'; j <= 'z'; j++)

	{
		if (j != 'e' && j != 'q')
			putchar(j);
	}
	putchar('\n');
	return (0);
}
