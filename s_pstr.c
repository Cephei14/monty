#include "monty.h"

/**
 * s_pstr - function that prints the string starting at the top of the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current;

	(void)counter;
	current = *head;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
			break;
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
