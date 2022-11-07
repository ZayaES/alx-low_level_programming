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
		int y;
		int x;

		x = argv[1];
		y = argv[2];

		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
