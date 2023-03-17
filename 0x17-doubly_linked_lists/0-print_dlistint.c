#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The pointer of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t numberOfNodes = 0;

	while (node)
	{
		printf("%i\n", node->n);
		numberOfNodes++;
		node = node->next;
	}

	return (numberOfNodes);
}
