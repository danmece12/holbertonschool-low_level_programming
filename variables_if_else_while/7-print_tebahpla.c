#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse, followed by a newline
*
* Return: 0 on success
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
