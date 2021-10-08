#include "lists.h"
#include <string.h>

/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: A pointer to the head of the list_t list
 *@str: the string
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *ture;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	ture = strture(str);
	if (ture == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = ture;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
