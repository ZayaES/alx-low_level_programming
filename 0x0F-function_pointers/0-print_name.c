#include "function_pointers.h"

/**
 * print_name - prints passed strings
 * @name: passed string
 * @f: function used to print string
 * function f determines how the name will be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
