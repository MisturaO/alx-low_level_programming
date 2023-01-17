#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 *	with the following elements
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Prototype of the function that initializes "struct dog" structure*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
