#include "main.h"

/**
 * _putchar_recursion - prints string recursively
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if ((*(s)) != '\0')
	{
	_putchar(*(s));
	s++;
	_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
