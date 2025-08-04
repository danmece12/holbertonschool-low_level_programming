#include <stdio.h>
#include <stddef.h>

/* PROTOTYPE FOR ARRAY ITERATOR */
void array_iterator(int *array, size_t size, void(*action)(int));

/* a simple callback that prints each int on its own line */
void print_elem(int x)
{
printf("%d\n", x);
}

int main(void)
{
int nums [] = {1, 2, 3, 4};
array_iterator(nums, 4, print_elem);
array_iterator(NULL, 4, print_elem);
array_iterator(nums, 0, print_elem);
return (0);
}
