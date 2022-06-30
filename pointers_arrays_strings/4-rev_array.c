#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: is the number of elements of the array
 * @a: is the pointer to the array
 *  Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;

	int i;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
