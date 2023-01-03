#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * init_dog - initializes dog
 * @d: name of variable to initialized as struct dog
 * @name: name
 * @age: age of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	printf("%s\n", (*d).name);
	printf("%s\n", d->name);

	return;
}
