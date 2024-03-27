#include "monty.h"

void s_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	while (current != NULL)
	{	
		printf("%d\n", current->n);
		current = current->next;
	}
}
