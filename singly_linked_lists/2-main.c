#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head = NULL;

	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	/* ... add more if you want ... */

	print_list(head);
	return (0);
}
