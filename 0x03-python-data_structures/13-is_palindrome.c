#include "lists.h"

#include <stddef.h>

/**
 * reverse_list - Reverses the second half of the linked list
 * @head: Pointer to the first node in the list
 * Return: Pointer to the new head of the reversed list
 */
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

/**
 * is_palindrome - Function in C that checks if a singly
 * linked list is a palindrome
 * @head: Double pointer to the linked list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *a = *head, *b = *head, *c = *head, *d = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		b = b->next->next;
		if (!b)
		{
			d = a->next;
			break;
		}
		if (!b->next)
		{
			d = a->next->next;
			break;
		}
		a = a->next;
	}

	reverse_list(&d);

	while (d && c)
	{
		if (c->n == d->n)
		{
			d = d->next;
			c = c->next;
		}
		else
			return (0);
	}

	if (!d)
		return (1);

	return (0);
}
