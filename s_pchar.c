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
	char c;

	(void)counter;
	if(!*head)
		p_error1(12);
	c = (*head)->n;
	if (isascii(c))
		printf("%c\n", c);
	else
		p_error1(13);
}
