#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e')
		{
		}
		else if (n == 'q')
		{
		}
		else
		{
			putchar(n);
		}

	}
	putchar('\n');
	return (0);
}
