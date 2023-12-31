#include "lists.h"

/**
 * add_nodeint_end - appends a node to the end of a linked list
 * @head: pointer to the first element in the list
 * @data: data to insert in the new element
 *
 * This function appends a new node with the given data at the end of the
 * linked list.
 *
 * Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
