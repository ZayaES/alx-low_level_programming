#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destinarion pointer
 * @src: sorce pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	i = i - 0;
	j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	l = 0;
	for (k = i; k <= j; k++)
	{
		*(dest + k) = *(src + l);
		l++;
	}
	return (dest);
}
