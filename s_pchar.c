#include "monty.h"

/**
 * s_pchar - function that prints the char at the top of the stack,
 * followed by a new line.
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pchar(mystack_t **head, unsigned int counter)
{
	char c = (*head)->n;

	(void)counter;
	printf("%c\n", c);
}
