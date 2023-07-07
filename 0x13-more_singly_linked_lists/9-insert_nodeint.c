#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the list where the new
 *       node should be added.
 * @n: The integer the new node will contain.
 * Return: The address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *copy = *head;
unsigned int nod;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;

if (idx == 0)
{
newnode->next = copy;
*head = newnode;
return (newnode);
}

for (nod = 0; nod < (idx - 1); nod++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);

copy = copy->next;
}

newnode->next = copy->next;
copy->next = newnode;

return (newnode);
}
