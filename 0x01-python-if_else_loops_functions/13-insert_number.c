#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_node - Function in C that inserts a number
 * into a sorted singly linked list
 * @head: A pointer the head of the linked list
 * @number: The number to insert
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *first = *head, *last;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = number;

	if (first == NULL || first->n >= number)
	{
		last->next = first;
		*head = last;
		return (last);
	}

	while (first && first->next && first->next->n < number)
		first = first->next;

	last->next = first->next;
	first->next = last;

	return (last);
}
