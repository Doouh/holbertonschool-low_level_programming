#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: listint_t variable
 * @index: unsigned int variable
 *
 * Return: listint_t variable
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		if (c == index)
		{
			tmp = head;
		}
		c++;
		head = head->next;
	}
	return (tmp);
}
