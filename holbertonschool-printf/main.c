/* test/main.c */
#include "main.h"
#include <stdio.h>

int main(void)
{
	int n1 = _printf("Hello %s %c %%\n", "world", '!');
	int n2 = printf("Hello %s %c %%\n", "world", '!');
	_printf("len1=[%d], len2=[%d]\n", n1, n2);
	return (0);
}