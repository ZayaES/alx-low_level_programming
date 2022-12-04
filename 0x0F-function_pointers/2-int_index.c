#include "function_pointers.h"

/**
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ret;
	
	if (size <= 0)
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
	
