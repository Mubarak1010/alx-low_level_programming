#include "dog.h"
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: first param
 * @name: second param
 * @age: third param
 * @owner: fourth param
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = owner;
}
