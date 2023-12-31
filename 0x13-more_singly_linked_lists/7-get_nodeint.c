#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node at
 * a specified index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the desired node
 *
 * This function retrieves the node at a specified index in a linked list.
 *
 * Return: pointer to the requested node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
