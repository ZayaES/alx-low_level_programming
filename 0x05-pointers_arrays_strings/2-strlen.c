#include "main.h"
#include <stdio.h>
/**
 * _strlen - gives length of string
 * @s: Pointer
 * Return: length of the string(integer)
 */

int _strlen(char *s)
{
	/*char *ptr;*/
	int i;

	/* *ptr = s; */
	i = 0;

	while (*(s + i) != '\0')
	{
		i = i + 1;
	}
	return (i);
}
