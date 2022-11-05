#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @c: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	shift_ptr(s, 1);
	s--;
	_putchar(*s);
	_print_rev_recursion(s);
}

/** 
 * shift_ptr - shifts pointer to the right by one byte
 * @s: string
 * Return: void
 */

void shift_ptr(char *s, int i)
{
	if (i > 0)
	{
		if (*(s) != '\0')
		{
			s++;
			shift_ptr(s, 1);
		}
		i--;
	}
}
