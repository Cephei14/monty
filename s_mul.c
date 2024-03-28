#include "monty.h"

/**
 * s_mul - function  multiplies the second top element of the
 * stack with the top element of the stack.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_mul(stack_t **head, unsigned int counter)
{
	stack_t *top1;
	stack_t *top2;
	(void)counter;

	if (!(*head) || !(*head)->next)
		p_error1(10);
	top1 = *head;
	top2 = top1->next;
	top2->n = top2->n * top1->n;
	s_pop(head, 0);
}
