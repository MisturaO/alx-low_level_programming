#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name param
 * @age: dog's age param
 * @owner: dog's owner param
 *
 * Return: returns pointer p.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len = 0, len2 = 0;
	dog_t *p;
	unsigned int len_sum;

	for (i = 0; name[i]; i++)
		len++;
	for (i = 0; owner[i]; i++)
		len2++;
	len_sum = len + len2;

	p = malloc(sizeof(len_sum));

	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
