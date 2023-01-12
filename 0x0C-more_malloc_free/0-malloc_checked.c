#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size
 *
 * Return: Pointer to allocated memory or terminate
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
