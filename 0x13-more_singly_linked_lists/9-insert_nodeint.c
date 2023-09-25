#include "lists.h"

/**
 * add_node_at_index - adds a new node at a specified index in a linked list
 * @head: pointer to the first node in the list
 * @index: index where the new node is to be added
 * @data: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if unsuccessful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int data)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return NULL;

	new_node->n = data;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	for (i = 0; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return new_node;
		}
		else
			temp = temp->next;
	}

	return NULL;
}
