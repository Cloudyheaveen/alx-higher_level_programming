#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct listint_a
{
	int n;
	struct listint_a *next;

} listint_a;

size_t print_listint(const listint_a *h);
listint_a *add_nodeint(listint_a **head, const int n);
void free_listint(listint_a *head);
int check_cycle(listint_a *list);
