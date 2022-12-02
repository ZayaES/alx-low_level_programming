#include "main.h"

/**
 * get_int - checks bit in a place specified  by index
 * @n: input integer
 * @index: nth place to check bit
 * Return: bit in nth place
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int u;

	u = ((n & 0xFFFFFFFFFFFFFFFF) >> index) & 1;

	return (u);
}
