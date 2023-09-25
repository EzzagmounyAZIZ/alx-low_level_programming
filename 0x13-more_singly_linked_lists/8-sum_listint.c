#include "lists.h"

/**
 * calculate_listint_sum - computes the sum of all data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
