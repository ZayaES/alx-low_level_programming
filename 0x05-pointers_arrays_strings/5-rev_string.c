#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	char u;
	char *c;

	c = &u;
	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		/* *(c + i) = *(s + i);*/
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(c + j) = *(s + i);
		i--;
		j++;
	}
	while (i <= j)
	{
	*(s + i) = *(c + i);
	}
}
