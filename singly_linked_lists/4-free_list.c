/* 4-free_list.c */
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all nodes of a list_t list
 * @head: head of the list (may be NULL)
 *
 * Note: since this takes a pointer by value, the caller’s variable
 * won’t be set to NULL—set it yourself after calling if you want.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);  /* strdup’d when nodes were created */
		free(head);
		head = next;
	}
}
