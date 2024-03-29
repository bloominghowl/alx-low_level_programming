#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new at the end of a singly lnked list
 * @head: pointer to the head of a singly linked list
 * @n: number to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmph;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == 0)
		return (0);

	tmph = *head;

	new_node->n = n;
	new_node->next = 0;

	if (tmph == 0)
	{
		*head = new_node;
	}
	else
	{
		while (tmph->next != 0)
			tmph = tmph->next;
		tmph->next = new_node;
	}
	return (new_node);
}
