/* 3-main.c */
#include "lists.h"

int main(void)
{
list_t *head = NULL;

add_node_end(&head, "Anne");
add_node_end(&head, "Colton");
add_node_end(&head, "Corbin");
print_list(head);
return (0);
}
