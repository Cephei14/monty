#include "monty.h"

/**
 * s_mod - function computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_mod(stack_t **head, unsigned int counter)
{
	stack_t *top1;
	stack_t *top2;
	(void)counter;

	if (!(*head) || !(*head)->next)
		p_error1(11);
	top1 = *head;
	top2 = top1->next;
	if (top1->n == 0)
		p_error2(15);
	top2->n = top2->n % top1->n;
	s_pop(head, 0);
}
