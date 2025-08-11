/* 3-print_all.c */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything according to a mini format string
 * @format: list of argument types:
 *          'c' = char, 'i' = int, 'f' = float, 's' = char *
 *          (ignore any other character)
 *
 * If a string argument is NULL, prints "(nil)" instead.
 * Prints a newline at the end.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			sep = ", ";
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			sep = ", ";
			break;
		default:
			i++;
			continue;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
