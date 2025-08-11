/* 2-print_strings.c */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by a string, then a newline
 * @separator: string printed between strings (ignored if NULL)
 * @n: number of strings passed
 *
 * If an argument string is NULL, prints "(nil)" in its place.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, const char *);
		printf("%s", s ? s : "(nil)");
		if (separator && i + 1 < n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
