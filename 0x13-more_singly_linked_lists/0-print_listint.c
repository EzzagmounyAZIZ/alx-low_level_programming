#include "lists.h"

/**
 * print_list_elements - displays all elements in a linked list
 * @head: pointer to the head of the linked list (of type listint_t)
 *
 * Return: the count of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return count;
}
