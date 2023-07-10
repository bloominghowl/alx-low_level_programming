#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int step = sqrt(size);
    int prev = 0;

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= (int)size)
            return -1;

        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    while (array[prev] < value)
    {
        prev++;

        if (prev == min(step, size))
            return -1;

        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }

    if (array[prev] == value)
        return prev;

    return -1;
}
