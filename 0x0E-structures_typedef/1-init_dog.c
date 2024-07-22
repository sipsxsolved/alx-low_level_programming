#include "dog.h"
#include <stdlib.h>

/**
* init_dog - function name
* @d: pointer to struct
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Description: a function that initializes a var 'struct dog'
* Return: void
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
