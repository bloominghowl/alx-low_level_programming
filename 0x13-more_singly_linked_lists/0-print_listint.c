#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a singly linked list
 * @h: pointer to the head of singly linnked list
 *
 * Return: Number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	
	return (size);
}
