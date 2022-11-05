#include "main.h"

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if ((*(s + i)) == '\0')
		return;
	_putchar(*(s + i));
	i++;
	_puts_recursion(s + i);
	_putchar('\0');
}
