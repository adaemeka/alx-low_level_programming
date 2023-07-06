#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list to print
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
size_t nod = 0;

while (h)
{
printf("%d\n", h->n);
nod++;
h = h->next;
}

return (nod);
}
