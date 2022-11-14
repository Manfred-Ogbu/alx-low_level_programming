#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
	int n;

	for (n = 0; src[n]; n++)
		dst[n] = src[n];
	dst[n] = '\0';
}

/**
 * new_dog - create new dog from the struct of the dog type.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int x, y;

	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(x + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(y + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcopy(d->name, name);
	_strcopy(d->owner, owner);
	d->age = age;
	return (d);
}

