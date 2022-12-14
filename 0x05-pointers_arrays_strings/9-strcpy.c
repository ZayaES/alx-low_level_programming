#include "main.h"

/**
 * _strcpy - copies from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: to pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
