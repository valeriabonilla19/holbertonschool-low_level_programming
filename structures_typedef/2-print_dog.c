#include "dog.h"
#include <stdio.h>

/**
* print_dog - Prints a struct dog
* @d: Pointer to struct dog to print
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
