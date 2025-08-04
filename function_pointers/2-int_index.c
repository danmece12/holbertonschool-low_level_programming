#include "function_pointers.h"  /* or your header */
#include <stddef.h>
/*
 * if you need NULL, though
 * here not required
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* 1. Guard against bad inputs */
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

/* 2. Loop through each element */
for (i = 0; i < size; i++)
{
/* 3. Apply the comparator */
if (cmp(array[i]) != 0)
return (i);
}

/* 4. No match found */
return (-1);
}
