#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the pointer to the first node
* @str: string to put in the new node
*
* Return: address of the new node, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

while (str[len])
len++;

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
