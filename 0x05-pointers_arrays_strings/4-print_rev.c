#include "main.h"

/**
 * print_rev - prints string
 * @s: character
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 1)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
