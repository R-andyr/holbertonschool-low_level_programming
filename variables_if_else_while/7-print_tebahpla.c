#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int abc;

	abc = 'z';
	while (abc >= 'a')
	{
	putchar(abc);
	abc--;
	}
	putchar('\n');
	return (0);
}
