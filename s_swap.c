#include "monty.h"

/**
 * s_swap - function that swap the last two element in the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_swap(stack_t **head, unsigned int counter)
{
	stack_t *top1 = *head;
	stack_t *top2 = top1->next;
	int temp = top1->n;

	(void)counter;
	if (top1->next == NULL)
		p_error0(6);
	top1->n = top2->n;
	top2->n = temp;
}
