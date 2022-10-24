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

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + j) = *(s + i);
		i--;
		j++;
	}
}
