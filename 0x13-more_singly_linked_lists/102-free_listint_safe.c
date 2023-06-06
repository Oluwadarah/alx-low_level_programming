#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was freed
 * The function sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)

{
	size_t g = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			g++;
		}
		else
		{
			free(*h);
			*h = NULL;
			g++;
			break;
		}
	}

	*h = NULL;

	return (g);
}
