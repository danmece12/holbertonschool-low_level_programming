#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of pointer to head node
 * @str: string to duplicate into the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	char *dup;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	while (dup[len])
		len++;

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		free(dup);
		return (NULL);
	}

	node->str = dup;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)            /* empty list: new node becomes head */
	{
		*head = node;
		return (node);
	}

	tail = *head;                 /* walk to the current last node */
	while (tail->next)
		tail = tail->next;

	tail->next = node;            /* append at the end */
	return (node);
}

int main(void)
{
list_t *head = NULL;

	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	print_list(head);
	return (0);
}

