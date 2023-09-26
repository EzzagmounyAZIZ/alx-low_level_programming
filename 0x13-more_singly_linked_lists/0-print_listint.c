#include "lists.h"

/**
 * print_listint - displays all elements in a linked list
 * @head: pointer to the head of the linked list (of type listint_t)
 *
 * This function prints the elements of a linked list and returns the count
 * of nodes.
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
	return (count);

}
