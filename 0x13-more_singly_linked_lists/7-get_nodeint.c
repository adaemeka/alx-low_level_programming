#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node
 * Return: The nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nod;

for (nod = 0; nod < index; nod++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
