#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
		int x;
		int y;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
