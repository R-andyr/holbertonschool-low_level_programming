#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anyting.
 * @format: type of arguments passed to the function.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *sep = "";
	int i = 0;

	va_start(valist, format);
	while (format && format[i])
	{
		if (I > 0 && (format[i] == 'c' || format[i] == 'i' 
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			if (va_arg(valist, char *) == NULL)
		}
	}
}
