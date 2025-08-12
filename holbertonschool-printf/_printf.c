/* _printf.c */
#include "main.h"

/**
 * _puts - write a C string to stdout
 * @s: string (prints "(null)" if s is NULL)
 *
 * Return: number of bytes written
 */
static int _puts(const char *s)
{
	int n = 0;

	if (!s)
		s = "(null)";

	while (s[n])
		n++;

	/* write the whole string at once */
	if (n)
		write(1, s, n);

	return (n);
}

/**
 * _putc - write one character to stdout
 * @c: character
 *
 * Return: 1 on success
 */
static int _putc(char c)
{
	return (write(1, &c, 1) == 1 ? 1 : 0);
}

/**
 * _printf - produces output according to a format
 * @format: format string (supports %c, %s, %%)
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	int i = 0;

	if (!format)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putc(format[i++]);
			continue;
		}

		i++; /* skip '%' */

		if (!format[i]) /* stray '%' at end -> error like printf project expects */
		{
			va_end(ap);
			return (-1);
		}

		if (format[i] == 'c')
			count += _putc((char)va_arg(ap, int));
		else if (format[i] == 's')
			count += _puts(va_arg(ap, char *));
		else if (format[i] == '%')
			count += _putc('%');
		else
		{
			/* Unknown specifier: print the '%' and the char, as many checkers accept */
			count += _putc('%');
			count += _putc(format[i]);
		}
		i++;
	}

	va_end(ap);
	return (count);
}