#include <stdio.h>
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog to initialize
* @name: Name to assign
* @age: Age to assign
* @owner: Owner to assign
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
