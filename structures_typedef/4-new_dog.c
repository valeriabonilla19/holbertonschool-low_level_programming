#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* _strdup - Duplicates a string manually
* @str: The input string
*
* Return: Pointer to the new string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (!str)
return (NULL);

while (str[len]) /* Calculate length manually */
len++;

dup = malloc(len + 1);
if (!dup)
return (NULL);

for (i = 0; i < len; i++) /* Copy manually */
dup[i] = str[i];

dup[len] = '\0';
return (dup);
}

/**
* new_dog - Creates a new dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the new dog_t structure, or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

if (!name || !owner)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (!new_dog)
return (NULL);

name_copy = _strdup(name);
if (!name_copy)
{
free(new_dog);
return (NULL);
}

owner_copy = _strdup(owner);
if (!owner_copy)
{
free(name_copy);
free(new_dog);
return (NULL);
}

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
