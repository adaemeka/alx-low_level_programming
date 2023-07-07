#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a linked list
* @head: Pointer to the list_t list
* @n: The integer the new node will contain
*
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *last;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
}
else
{
last = *head;

while (last->next != NULL)
last = last->next;
last->next = newnode;
}

return (*head);
}
