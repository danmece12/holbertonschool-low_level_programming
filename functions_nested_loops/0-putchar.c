#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char *s = "_putchar";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}