#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a copy of str
 * @str: input string
 * Return: ptr
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = malloc(sizeof(str) * strlen(str));
	if ((ptr == NULL) || (str == NULL))
	{
		return(NULL);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	return (ptr);
}
