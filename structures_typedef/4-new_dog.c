#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

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

name_copy = malloc(strlen(name) + 1);
if (!name_copy)
{
free(new_dog);
return (NULL);
}
strcpy(name_copy, name);

owner_copy = malloc(strlen(owner) + 1);
if (!owner_copy)
{
free(name_copy);
free(new_dog);
return (NULL);
}
strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
