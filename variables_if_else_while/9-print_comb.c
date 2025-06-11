#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 separated by ", "
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
