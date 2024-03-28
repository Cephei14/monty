#include "monty.h"

/**
 * s_add - function that add the top two elements of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_add(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
	mystack_t *top2 = top1->next;
	(void)counter;

	if (top1->next == NULL)
		p_error(7, NULL, NULL);
	top2->n = top1->n + top2->n;
	s_pop(head, 0);
}
