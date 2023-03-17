#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t numberOfNodes = 0;

	while (node)
	{
		numberOfNodes++;
		printf("%d\n", node->n);
		node = node->next;
	}

	return (numberOfNodes);
}
