#include "lists.h"


/**
 * pop_listint - removes the first node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * This function removes the first node of a linked list and returns its data.
 *
 * Return: the data from the removed element,
 * or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
