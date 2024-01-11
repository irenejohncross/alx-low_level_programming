#include "lists.h"

/**
 * sum_dlistint - Sums all The Data of a dlistint_t linked list
 * @head: pointer to the Beginning of linked list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
