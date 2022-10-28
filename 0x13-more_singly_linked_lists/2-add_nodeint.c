#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 *
 * @head: pointer to pointer to struct node
 * @n: int to be added
 *
 * Return: address to new element added or NULL incase of failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
