#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at
 * a specified index in a linked list
 * @head: pointer to the first node in the list
 * @in: index where the new node is to be added
 * @dt: data to insert in the new node
 *
 * This function adds a new node with
 * the given data at the specified index in
 * the linked list.
 *
 * Return: pointer to the new node, or NULL if unsuccessful
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int in, int dt)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = dt;
	new_node->next = NULL;

	if (in == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp && i < in; i++)
	{
		if (i == index - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);

}
