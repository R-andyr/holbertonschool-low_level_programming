#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz\n");
	else if (i % 3 == 0)
		printf("Fizz\n");
	else if (i % 5 == 0)
		printf("Buzz\n");
	else
		printf("%d\n", i);
	}
}
