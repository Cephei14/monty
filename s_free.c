#include "monty.h"

/**
 * s_free - function that free a list
 * @head: head of list
 * Return: nothing
 */

void s_free(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
