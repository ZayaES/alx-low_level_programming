#include <stdio.h>

/*
* linear_search - function to search an array linearly
* @array: pointer to arrayy
* @size: length of array
* @value: item to search
* return: integer (index of value when found, -1 when not found)
*/

int linear_search(int *array, size_t size, int value) 
{
	int i = 0;
	if (array == NULL)
	{
		return -1;
	}

	while(*(array + i) != value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		i++;
	}
	if (i < (int)size) 
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));	
		return i;
	}
	return (-1);
}
