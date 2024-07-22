#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - function name
 * @str: string
 *
 * Desctription: function that finds len of str
 * Return: len of str (int)
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - function name
 * @dest: destination string
 * @src: source string
 *
 * Desctription: function that copies src string to dest str
 * Return: pointer to dest. str
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function name
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);

	return (poppy);
}
