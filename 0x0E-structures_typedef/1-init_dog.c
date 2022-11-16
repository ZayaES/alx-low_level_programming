#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initializes dog
 * @d: name of variable to initialized as struct dog
 * @name: name
 * @age: age of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
	
	d = malloc(sizeof(struct dog));
	if (*d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
