#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list
* @head: Pointer to the pointer to the head node
* @n: Integer value to store in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node's values */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Otherwise, find the last node and add the new node after it */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
