#include "main.h"

/**
 * _strlen - gives length of string
 * @s: Pointer
 * Return: length of the string(integer)
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
