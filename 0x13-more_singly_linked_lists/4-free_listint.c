#include "lists.h"

/**
 * free_listint - deallocates memory for a linked list
 * @head: pointer to the beginning of the list
 *
 * This function deallocates memory for a linked list.
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
