#include "monty.h"

/**
 * s_sub - function that  subtracts the top element of the
 * stack from the second top element of the stack.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_sub(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
	mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n - top1->n;
	s_pop(head, 0);
}
