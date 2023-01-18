#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of type int
 * @size: size of array
 * @cmp: function with argument int
 *
 * Return: 0 if false, somethin else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
