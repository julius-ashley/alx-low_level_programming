#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - This function releases the node memory from the heap
 *@head: poiner to a pointer to a struct
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (*head == NULL)
	{
		printf("(nil)");
	}

	else
	{
		while (p != NULL)
		{
			p = p->next;
			free(*head);
			*head = p;
		}
	
	}
	return;
}
