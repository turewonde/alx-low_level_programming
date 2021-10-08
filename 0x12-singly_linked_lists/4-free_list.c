#include "lists.h"
#include <stdlib.h>

/**
 *free_list - frees a list
 *@head: A pointer to list
 */

void free_list(list_t *head)
{
	list_t *wonde;

	while (head)
	{
		wonde = head->next;
		free(head->str);
		free(head);
		head = wonde;
	}
}
