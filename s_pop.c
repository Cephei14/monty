#include "monty.h"

/**
 * s_pop - function that pop the top element of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pop(mystack_t **head, unsigned int counter)
{
	mystack_t *current = (*head)->next;
	(void)counter;
	if (*head == NULL)
		p_error0(5, NULL, NULL);
	free(*head);
	*head = current;
}
