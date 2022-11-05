#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		s--;
		_putchar(*s);
		*s = '\0';
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
