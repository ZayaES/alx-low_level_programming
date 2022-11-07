#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments to the function
 * @argc: counts number of argument
 * @argv: points to the argument strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int *x;
		int *y;
		int a;
		int b;

		x = (int *) &argv[1];
		y = (int *) &argv[2];
		*x = (int) *argv[1];
		*y = (int) *argv[2];
		a = *(x) - 48;
		b = *y - 48;

		printf("%d, %d\n", a, b);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
