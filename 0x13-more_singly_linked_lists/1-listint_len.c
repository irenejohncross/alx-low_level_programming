#include "lists.h"

/**
 * listint_len - Returned the Number of Elements in a Linked Lists
 * @h: Linked list of type listint_t to Traverse
 *
 * Return: Number of Nodes
 */
size_t listint_len(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 num++;
 h = h->next;
 }

 return (num);
}
