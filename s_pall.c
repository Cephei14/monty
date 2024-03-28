#include "monty.h"

/**
 * s_pall - function that print everything the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_pall(mystack_t **head, unsigned int counter)
{
	mystack_t *current = *head;
	(void)counter;

	if (*head == NULL)
		return;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
