#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *d;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (i = 1, ptr = name; *ptr; i++)
		ptr += 1;

	d->name = malloc(i);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (i = 1, ptr = owner; *ptr; i++)
		ptr += 1;
	d->owner = malloc(i);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	i = 0;
	for (i = 0; *name != 0; i++, name++)
		d->name[i] = *name;
	d->name[i] = 0;
	for (i = 0; *owner != 0; i++)
		d->owner[i] = *owner++;
	d->owner[i] = 0;
	d->age = age;
	return (d);
}
