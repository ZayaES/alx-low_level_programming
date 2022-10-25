#include "main.h"

/**
 * _atoi - covert strings to int
 * @s: input string
 * Return: int
 */

int *_atoi(char *s)
{
	int i;
	int j;
	int u[1000];
	int *a = u;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		*(a + j) = (*(s + j) - 0x30);
	}
	return (a);
}
