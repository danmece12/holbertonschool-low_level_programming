#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - applies a callbak to each element of an int array
* @array: pointer to the first element
* @size: number of elements in array
* @actions: function pointer to apply to each element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
