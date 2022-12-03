#include "main.h"

/**
 * clear_bit - sets bit in a place specified  by index
 * @n: input integer
 * @index: nth place to set bit
 * Return: 1 if successful or 0 when unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n & ~(1 << index));
	if (index > 64)
		return (-1);

	return (1);
}
