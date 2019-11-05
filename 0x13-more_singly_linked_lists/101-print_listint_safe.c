#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - entry point
 * @head: listint_t variable
 *
 * Return: size_t variable
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_t *last = (void *)head;

	while (head != NULL && last > head->next)
	{
		last = (void *)head;
		printf("[%p] %d\n", (void *)head, head->n);
		n++;
		head = head->next;
	}
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
