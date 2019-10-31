#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - entry point
 * @head: list_t variable
 * @str: char variable
 *
 * Return: list_t variable
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_size = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[str_size] != '\0')
		str_size++;
	new->str = strdup(str);
	new->len = str_size;
	new->next = *head;
	*head = new;
	return (new);
}
