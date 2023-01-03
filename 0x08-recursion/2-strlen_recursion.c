#include "main.h"

/**
 * _strlen_recursion - find the length of a string usimg recursion
 * @s: inpit string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if ((*s + 1) != '\0')
	{
		_strlen_recursion(s + 1);
	}
	ret
		yhurn (_strlen_recursion(s + 1) - _strlen_recursion(s));
}
