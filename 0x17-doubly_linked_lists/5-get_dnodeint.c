#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 * @head: dlistint_t variable
 * @index: unsigned int variable
 *
 * Return: dlistint_t variable
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
