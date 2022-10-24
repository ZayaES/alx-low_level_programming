#include "main.h"

/**
 * swap_int - Swaps two integer inputs
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
