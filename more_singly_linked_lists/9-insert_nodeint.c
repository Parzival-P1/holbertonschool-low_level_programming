#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at the end of a list
 * @head: pointer to the struct listint_t
 * @idx: index of the list
 * @n: integer value
 * Return: the addres of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head, *back = NULL;

	unsigned int pos = -1, insert = 0;

	/*if (head == NULL)*/
		/*return (NULL);*/

	new = create_node(n);

	if (*head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		pos++;

		if (pos == idx)
		{
			if (back == NULL)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				back->next = new;
				new->next = temp;
			}
			insert++;
		}
		back = temp;
		temp = temp->next;
	}
	if (!insert)
		return (NULL);
	return (*head);
}

/**
 * create_node - creates a new node
 * @n: the integer value to be returned
 * Return: the new node
 */

listint_t *create_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	return (new);
}
