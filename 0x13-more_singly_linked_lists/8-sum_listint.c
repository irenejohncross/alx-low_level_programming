#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the DATA in a listint_t list
 * @head: First Node in the linked list
 *
 * Return: Resulting Sum
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;

 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }

 return (sum);
}
