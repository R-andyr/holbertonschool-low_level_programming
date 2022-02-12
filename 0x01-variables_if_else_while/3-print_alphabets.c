#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
