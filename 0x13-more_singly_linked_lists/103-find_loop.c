#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, 
 * or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *find = head;
	listint_t *seek = head;

	if (!head)
		return (NULL);

	while (find && seek && seek->next)
	{
		seek = seek->next->next;
		find = find->next;
		if (seek == find)
		{
			find = head;
			while (find != seek)
			{
				find = find->next;
				seek = seek->next;
			}
			return (seek);
		}
	}

	return (NULL);
}
