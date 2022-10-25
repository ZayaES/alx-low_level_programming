#include "main.h"

/**
 * puts2 - prints every other string
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(*(str + j));
		}
		_putchar('\n');
	}
}
