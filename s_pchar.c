#include "monty.h"

/**
 * s_pchar - function that prints the char at the top of the stack,
 * followed by a new line.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pchar(stack_t **head, unsigned int counter)
{
	stack_t *c;

	(void)counter;
	c = *head;
	if (!c)
		p_error1(12);
	if (c->n > 127 || c->n < 0)
		printf("%c\n", c->n);
	else
		p_error1(13);
}
