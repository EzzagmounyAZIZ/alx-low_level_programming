#include "lists.h"

/**
 * release_linked_list - deallocates memory for a linked list
 * @head: pointer to the beginning of the list
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
