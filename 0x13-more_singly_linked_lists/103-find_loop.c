#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - entry point
 * @head: listint_t variable
 *
 * Return: size_t variable
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *last = (void *)head;

	while (head != NULL && last > head->next)
	{
		last = (void *)head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (head);
	}
	else
		return (NULL);
}
