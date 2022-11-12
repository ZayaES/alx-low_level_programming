#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatemates two strings
 * @s1: 1sr string
 * @s2: 2nd string
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr;
	int x;
	int y;
	int j;

	x = strlen(s1);
	y = strlen(s2);
	ptr = malloc(sizeof(*s1) * x  + sizeof(*s2) * y + 1);
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	j = 0;
	for (i = x; i < x + y; i++)
	{
		*(ptr + i) = *(s2 + j);
		j++;
	}
	return (ptr);
}
