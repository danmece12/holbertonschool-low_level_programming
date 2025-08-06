/* 100-main_opcodes.c */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector (argv[1] = number of bytes)
 *
 * Return: 0 on success, or an exit code as specified:
 *   1 if the argument count is wrong
 *   2 if the byte count is negative
 */
int main(int argc, char **argv)
{
    int n, i;
    unsigned char *p;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    n = atoi(argv[1]);
    if (n < 0)
    {
        printf("Error\n");
        return (2);
    }

    /* take the address of main as a pointer to raw bytes */
    p = (unsigned char *)((uintptr_t)main);

    /* print n bytes in two-digit lowercase hex separated by spaces */
    for (i = 0; i < n; i++)
    {
        printf("%02x", p[i]);
        if (i + 1 < n)
            putchar(' ');
    }
    putchar('\n');

    return (0);
}
