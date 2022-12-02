#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: input binary
 * Return: Return the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int x;
	unsigned int u;

	i = 0;
	u = 0;
	while (*(b + i) != '\0')
	{
		if ((*(b + i) > '1'))
			return (0);
		i++;
	}
	for (j = 0; j < i; j++)
	{
		x = (*(b + j) - 0x30) * 2;
		u = u + _power(x, i - 1 - j);
	}

	return (u);
}

/**
 * _power - calculates the power of number
 * @base: number to find its power
 * @exp: the nth power(exponent)
 * Return: power
 */

unsigned int _power(unsigned int base, unsigned int exp)
{
	unsigned int i;
	unsigned int power;

	power = 1;
	if (exp == 0)
	{
		if (base == 2)
		{
			return (power);
		}
		else
		{
			return (0);
		}
	}
	for (i = 0; i < exp; i++)
	{
		power = power * base;
	}
	return (power);
}
