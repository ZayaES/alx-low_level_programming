#include "main.h"

/**
 * _strncat - concat strings with n max
 * @dest: dest ptr
 * @src: src ptr
 * @n: max byte spexifier
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
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
	j = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	l = 0;
	if (n < j)
	{
		for (k = i; k < i + n; k++)
		{
			*(dest + k) = *(src + l);
			l++;
		}
	}
	else
	{
		for (k = i; k < i + j; k++)
		{
			*(dest + k) = *(src + l);
			l++;
		}
	}
	return (dest);
}
