#include "lists.h"

/**
 * sum_dlistint - entry point
 * @head: dlisint_t variable
 *
 * Return: int variable
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
