/* 100-first.c */
#include <stdio.h>

/* Run before main() */
__attribute__((constructor))
static void hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
