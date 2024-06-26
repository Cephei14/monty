#include "monty.h"

/**
 * s_pint - function that print the head of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pint(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	(void)counter;
	if (*head == NULL)
		p_error(4, NULL, NULL);
	printf("%d\n", current->n);
}
