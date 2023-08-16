#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog variable.
 *
 * @d: the variable with dog type.
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
