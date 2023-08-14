#include "dog.h"

/**
 * init_dog - initializes a variable of type dog.
 *
 * @d: variable with dog type.
 * @name: name of the variable d.
 * @age: age option for d.
 * @owner: owner option for d.
 * Return: nothing it is a void just initialise the d variable.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
