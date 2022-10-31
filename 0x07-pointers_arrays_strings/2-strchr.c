#include "main.h"

/**
 * _strchr - finds the first occurrence of a character
 * @s: string buffer
 * @c: character to find
 * Return: ptr
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	while (*(s + i) != c)
	{
		i++;
	}
	ptr = s + i;
	if (*(s + i + 1) == '\0')
	{
		ptr = NULL;
	}

	return (ptr);
}
