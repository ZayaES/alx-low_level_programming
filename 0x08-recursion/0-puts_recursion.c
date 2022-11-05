#include "main.h"

void _puts_recursion(char *s)
{
	//int i;

	/* i = 0;*/
	if ((*(s)) == '\0')
		return;
	_putchar(*(s));
	/* i++;*/
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
