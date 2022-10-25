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
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	for (n = n; n < i; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
