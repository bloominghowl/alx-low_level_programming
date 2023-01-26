#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer of head of singly linked list
 *
 * Return: Number  of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned int size = 0;

	while (h != 0)
		h = h->next, size++;
	return (size);
}
