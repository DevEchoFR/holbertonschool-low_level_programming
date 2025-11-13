#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t), or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (len = 0; name[len]; len++)
		;
	d->name = malloc(len + 1);
	if (d->name == NULL)
		return (free(d), NULL);
	for (i = 0; i < len; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (len = 0; owner[len]; len++)
		;
	d->owner = malloc(len + 1);
	if (d->owner == NULL)
		return (free(d->name), free(d), NULL);
	for (i = 0; i < len; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;
	return (d);
}
