#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free dlistint_t list
 * @head:Pointer the beginning of the linked list
 *
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
