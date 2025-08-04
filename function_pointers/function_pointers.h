#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using the given callback
 * @name: the string to print
 * @f: pointer to a function that takes a char * and returns void
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
