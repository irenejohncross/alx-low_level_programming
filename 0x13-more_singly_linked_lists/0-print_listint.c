#include "lists.h"

/**
 * print_listint - Printed all the Elements of a linked list
 * @h: Linked List of Type listint_t to Print
 *
 * Return: Nodes Number
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}
