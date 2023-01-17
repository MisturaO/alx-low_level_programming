#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the values of
 *	members ofstruct dog
 * @d: struct dog variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", (*d).name);
	if ((*d).age == 0)
		printf("Age: (nil)\n");
	else
		printf("%f\n", d->age);

	/*NOTE: this syntax (*d).owner and this syntax d->owner does the same thing, they are both pointing to the address of the owner member. The asteris * is meant to get the value at the address of owner*/

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
}
