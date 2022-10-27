#include "main.h"

/**
 * _strncpy - copies src into dest
 * @dest: ptr dest
 * @src: ptr src
 * @n: max n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	for ( ; i < n; i++)
	{
		*(dest + j) = '\0';
	}
	return (dest);
}
