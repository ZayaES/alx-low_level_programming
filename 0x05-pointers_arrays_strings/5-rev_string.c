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
	char *c;

	i = 0;
	j = 0;
	*c = *s;

	while (*(c + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + j) = *(c + i);
		i--;
		j++;
	}
}
