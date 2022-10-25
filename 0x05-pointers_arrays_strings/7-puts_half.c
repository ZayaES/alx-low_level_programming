#include "main.h"

/**
 * puts_half - prints latter half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n;

	i = 0;

	while(*(str + i) != '\0')
	{
		i++;
	}
	n = i / 2;

	for (n; n < i; n++)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
