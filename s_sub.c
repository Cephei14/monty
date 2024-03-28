#include "monty.h"

/**
 * s_sub - function that  subtracts the top element of the
 * stack from the second top element of the stack.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_sub(stack_t **head, unsigned int counter)
{
	stack_t *top1;
	stack_t *top2;
	(void)counter;

	if (!(*head) || !(*head)->next)
		p_error0(8);
	top1 = *head;
	top2 = top1->next;
	top2->n = top2->n - top1->n;
	s_pop(head, 0);
}
