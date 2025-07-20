#include <stdio.h>

/**
 * main - prints all unique two-digit combinations (01 to 89)
 *        in ascending order, separated by ", ", followed by a newline
 *
 * Return: Always 0.
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 8; d1++)
	{
		for (d2 = d1 + 1; d2 <= 9; d2++)
		{
			putchar('0' + d1); /* #1 */
			putchar('0' + d2); /* #2 */
			if (!(d1 == 8 && d2 == 9))
			{
				putchar(','); /* #3 */
				putchar(' '); /* #4 */
			}
		}
	}
	putchar('\n'); /* #5 */

	return (0);
}
