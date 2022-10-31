#include "main.h"

/**
 * _memset - reset memory upto nth place
 * @s:buffer to be reset
 * @b: character that'd act as reseter
 * @n: place to reset to
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
