#include "main.h"

/**
 * _atoi - covert strings to int
 * @s: input string
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int j;
	int k;
	int u = 0;
	int *a = &u;

	while (*(s + i) != '\0')
	{
		i++;
	}
	k = i;
	for (j = 0; j < k - 1; j++)
	{
		*a = *a + (*(s + i));/* * (10 ** j);*/
		i--;
	}
	return (i);
}
