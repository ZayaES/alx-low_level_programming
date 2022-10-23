#include "main.h"

/**
 * _isdigit - this checks for digit
 * @c: First integer
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
