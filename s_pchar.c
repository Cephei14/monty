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
	stack_t *h;

	(void)counter;
	h = *head;
	if (!h)
	{
		s_free(*head);
		p_error1(13);
	}
	if (h->n > 127 || h->n < 0)
	{
		s_free(*head);
		p_error1(12);
	}
	printf("%c\n", h->n);
}
