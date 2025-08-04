#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints the name exactly as given
 * @name: the string to print
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints the name in uppercase
 * @name: the string to print
 */
void print_name_uppercase(char *name)
{
	char c;

	printf("Hello, my uppercase name is ");
	while ((c = *name++))
		putchar(toupper((unsigned char)c));
	putchar('\n');
}

/**
 * main - tests print_name with two callbacks
 *
 * Return: 0 on success
 */
int main(void)
{
	print_name("Bob Dylan", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	return (0);
}
