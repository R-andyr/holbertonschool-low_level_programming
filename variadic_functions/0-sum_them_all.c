#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: number of parameters
 *@...: Other parameters
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
