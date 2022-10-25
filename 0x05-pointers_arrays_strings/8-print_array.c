#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out array elements
 * @a: pointer
 * @n number of element
 * Return: void
 */

void print_array (int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
}
