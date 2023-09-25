#include "lists.h"

/**
 * release_listint_safe - deallocates memory for a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	int difference;
	listint_t *temp;

	if (!head || !*head)
		return 0;

	while (*head)
	{
		difference = *head - (*head)->next;
		if (difference > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}

	*head = NULL;

	return count;
}
