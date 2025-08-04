#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
printf("Hello , my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
char c;
printf("Hello, my uppercase name is");
while ((c = *name++))
{
putchar(toupper((unsigned char)c));
}
putchar('\n');
}


int main(void)
{
print_name("Bob Dylan", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}