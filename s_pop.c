#include "monty.h"

/**
 * s_pop - function that pop the top element of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pop(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;
	if (*head == NULL)
		p_error0(5);
	current = (*head)->next;
	free(*head);
	*head = current;
}
