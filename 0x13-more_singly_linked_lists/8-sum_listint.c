#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - entry point
 * @head: listint variable
 * 
 * Return: int variable
*/

int sum_listint(listint_t *head)
{
	int acu = 0;

	while (head != NULL)
	{
		acu += head->n;
		head = head->next;
	}
	return (acu);
}
