#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
und %d at index: %d\n", 999, linear_search(array, size, 999))
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array2[5];
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    size_t size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));


    printf("Found %d at index: %d\n", 999, linear_search(array2, size2, 99));

    return (EXIT_SUCCESS);
}
