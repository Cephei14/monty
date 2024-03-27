#inlclude "monty.h"

/**
 *
 */

void *addtostack(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	if (*head != NULL)
                (*head)->prev = new_node;
	else
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	*head = new_node;
}
