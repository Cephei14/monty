#include "monty.h"

/**
 * s_swap - function that swap the last two element in the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_swap(stack_t **head, unsigned int counter)
{
	stack_t *top1;
	stack_t *top2;
	int temp;

	(void)counter;
	if (*head == NULL || !(*head)->next)
		p_error0(6);
	top1 = *head;
	top2 = top1->next;
	temp = top1->n;
	top1->n = top2->n;
	top2->n = temp;
}
