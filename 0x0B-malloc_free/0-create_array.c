#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initializes an array
 * @size: number of elements in array
 * @c: initializing char
 * Return: char pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned long int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	else
		return (NULL);
}
