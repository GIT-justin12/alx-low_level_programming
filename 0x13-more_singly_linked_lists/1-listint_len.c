#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists.
 * @h: linked list of type listint_t to traverse.
 * Return: number of nodes
 */

size_t listint_len(cont listint_t *h)
{
	size_tnum = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
