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
	list_t *new;
	size_t size_str = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[size_str] != '\0')
	{
		size_str++;
	}
	new->len = size_str;
	//while (*head != NULL)
	//	*head = *head->next;
	(*head)->next = new;
	
	return (new);
}
