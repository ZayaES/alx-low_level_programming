#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: input array
 * @size: size of array
 * @action: specifies what should be done with array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((action == NULL) || (array == NULL))
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
