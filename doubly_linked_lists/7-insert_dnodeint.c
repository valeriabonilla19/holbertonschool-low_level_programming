#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Pointer to the head pointer of the list
* @idx: Index to insert the new node at (starting at 0)
* @n: Data to store in the new node
*
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n)); /* Insert at the beginning */

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL) /* Index is out of bounds */
return (NULL);

if (temp->next == NULL) /* Insert at the end */
return (add_dnodeint_end(h, n));

/* Insert in the middle */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
