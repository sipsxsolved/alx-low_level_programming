#include "dog.h"
#include <stdlib.h>



/**
* free_dog - function name
* @d: pointer to struct dog object
*
* Description: a function that frees dogs
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
