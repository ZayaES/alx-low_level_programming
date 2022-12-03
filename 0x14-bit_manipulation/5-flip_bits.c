#include "main.h"

/**
 * flip_bits - counts the number of bit
 * @n: initial number
 * @m: final number
 * Return: the number of bits requkred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	unsigned int i, count;

	l = n ^ m;
	i = 0;
	count = 0;

	while (i < 64)
	{
		count = count + (l & 1);
		l = l >> 1;
		i++;
	}
	return (count);
}
