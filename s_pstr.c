#include "monty.h"

/**
 * s_pstr - function that prints the string starting at the top of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pstr(mystack_t **head, unsigned int counter)
{
	mystack_t *current = *head;

	(void)counter;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
			return;
		printf("[%c]", current->n);
		current = current->next;
	}
}
