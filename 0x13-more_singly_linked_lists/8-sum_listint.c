#include "lists.h"

/**
 * sum_listint - calculate the sum
 * @head: first node in the linked list
 *
 * Return: on success, resulting sum
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
