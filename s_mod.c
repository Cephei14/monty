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
	stack_t *top1 = *head;
	stack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n % top1->n;
	s_pop(head, 0);
}
