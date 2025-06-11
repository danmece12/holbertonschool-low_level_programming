#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number and print its last digit
 *
 * Description: uses rand(), RAND_MAX and time() to seed.
 * Prints the last digit of n and whether it is:
 *   – greater than 5
 *   – 0
 *   – less than 6 and not 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, last;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);

	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}