#include "lists.h"

/**
 * listint_len - calculates the number of nodes in a linked list
 * @head: linked list of type listint_t to analyze
 *
 * This function calculates the number of nodes in a linked list.
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
