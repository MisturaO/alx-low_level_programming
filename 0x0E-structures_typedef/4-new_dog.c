#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog name member
 * @age: dog's age member
 * @owner: dog's owner member
 *
 * Return: returns pointer p.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;
	dog_t *poppy;

	/*This line means 1 char bite times the lenght of the chars in member name*/
	new_name = malloc(sizeof(*name) * (strlen(name) + 1));
	new_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	poppy = malloc(sizeof(dog_t));

	if (new_name && new_owner && poppy)
	{
		strcpy(new_name, name);
		strcpy(new_owner, owner);
		poppy->name = new_name;
		poppy->age = age;
		poppy->owner = new_owner;
	}
	else
	{
		free(new_name);
		free(new_owner);
		free(poppy);
		return (NULL);
	}
	return (poppy);
}
