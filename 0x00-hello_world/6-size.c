/*#!/bin/bash*/
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	prinf("Size of an int: %d bytes(s)", sizeof(int));
	prinf("Size of a long int: %d bytes(s)", sizeof(long int));
	prinf("Size of a long long int: %d bytes(s)", sizeof(long long int));
	prinf("Size of a float: %d bytes(s)", sizeof(float));
}
