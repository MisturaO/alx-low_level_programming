#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of
 *	type struct dog
 *@d: the struct dog structure variable
 *@name: param for dog name
 *@age: param for dog's age
 *@owner: param for dog's owner name
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
