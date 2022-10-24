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

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		 _putchar(*(str + i));
		 i--;
	}
	_putchar('\n');
}
