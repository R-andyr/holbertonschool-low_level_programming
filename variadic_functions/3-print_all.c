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
	va_list ap;
	int i = 0;
	char *s;

	while (format && format[i])
	{
		va_start(ap, format);
		while (format[i])
		{
			switch (format[i++])
			{
				case 'c':
					printf("%c", (char) va_arg(ap, int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s)
						printf("%s", s);
					else
						printf("(nil)");
					break;
				default:
					break;
			}
			if (format[i] && (format[i] == 'c' || format[i] == 'i' || format[i]))
				printf(", ");
		i++;
	}
	va_end(ap);
	}
	printf("\n");
}
