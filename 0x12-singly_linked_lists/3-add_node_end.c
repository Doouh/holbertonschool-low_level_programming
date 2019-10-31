#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - entry point
 * @head: list_t variable
 * @str: char variable
 * Return: list_t variable
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t size_str = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[size_str] != '\0')
		size_str++;
	new->str = strdup(str);
	new->len = size_str;
	new->next = NULL;
	if ((*head) == NULL)
		(*head) = new;
	else
	{
		tmp = (*head);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
