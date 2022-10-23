#include "main.h"

/**
 * _isupper - tgis checks for uppercase
 * @c: First integer
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
