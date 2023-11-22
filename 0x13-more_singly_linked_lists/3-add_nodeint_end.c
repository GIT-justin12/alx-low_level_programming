#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list.
 * @head: pointer to the first element in the list.
 * @n: data to insert in the new element.
 *
 * Return: pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_list, *tmp;

if (head)
{
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new_list;
		return (tmp);
	}
}

return (NULL);
}
