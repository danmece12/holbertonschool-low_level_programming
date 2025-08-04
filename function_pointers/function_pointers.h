#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using the given callback
 * @name: the string to print
 * @f: pointer to a function that takes a char * and returns void
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif /* FUNCTION_POINTERS_H */
