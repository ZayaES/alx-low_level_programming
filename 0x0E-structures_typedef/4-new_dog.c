#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: new dog attribute
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == (void *)0)
		return ((void *)0);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
