#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -this initializes a variable of type struct dog
 * @d: the pointer to struct dog needed to be initialized
 * @name: the name needed to be initialized
 * @age: the age that needs to be initialized
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
