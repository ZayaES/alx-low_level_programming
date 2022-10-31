#include "main.h"

/**
 * _memcpy - copy memory from src to dest
 * @dest: copied to
 * src: copied from
 * @n: place value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
