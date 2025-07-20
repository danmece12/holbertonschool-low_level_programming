#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers
         from 00 to 99, separated by ", ", followed by a newline
* Numbers are printed in ascending order, each with two digits (leading 0)
* and the smaller pair first (00 01 , but not 01 00).
*
* Return: Always 0.
*/

int main(void)
{
    int n1, n2;

    for (n1=0; n1 <=98; n1++)
    {
        for (n2 = n1+1; n2<=99; n2++)
        {
            putchar('0' + n1 / 10); /* #1 tens of first */
            putchar('0' + n2 % 10); /* #2 units of first */
            putchar(' ');           /* #3 space between numbers */
            putchar('0' + n2 / 10); /* #4 tens of second */
            putchar('0' + n2 % 10); /* #5 units of second */
            if (!(n1==98 && n2 == 99))
            {
                putchar(',');       /* #6 comma separator */
                putchar(' ');       /* #7 space after comma */
            }
        }
    }
    putchar('\n');                  /* #8 final newline*/
    return (0);
}