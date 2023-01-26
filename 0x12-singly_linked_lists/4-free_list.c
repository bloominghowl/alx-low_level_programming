#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - unction that frees a memory of list
 * @head: pointer to head of singly linked list
 *
 * Return: No Return
 */

void free_list(list_t *head)
{
	if (head == 0)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
