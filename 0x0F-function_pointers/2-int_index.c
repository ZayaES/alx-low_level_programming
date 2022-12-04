#include "function_pointers.h"

/**
 * int_index - operates a comparative function
 * @array: input array
 * @size: of array
 * @cmp: comparative function
 * Return: index of true value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ret;

	if ((size <= 0) || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ret = cmp(*(array + i));
		if (ret != 0)
		{
			return (i);
		}
	}
	return (-1);
}
