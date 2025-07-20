#include <stdio.h>

/**
 * main - prints all combinations of two two-digit numbers
 *        from 00 to 99 in ascending order,
 *        separated by ", ", followed by a newline
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar('0' + n1 / 10);  /* #1 tens of first */
			putchar('0' + n1 % 10);  /* #2 units of first */
			putchar(' ');            /* #3 space between numbers */
			putchar('0' + n2 / 10);  /* #4 tens of second */
			putchar('0' + n2 % 10);  /* #5 units of second */

			if (!(n1 == 98 && n2 == 99))
			{
				putchar(',');        /* #6 comma separator */
				putchar(' ');        /* #7 space after comma */
			}
		}
	}
	putchar('\n');                 /* #8 final newline */
	return (0);
}