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
	char c;
	while (current->next)
	{
		c = current->n;
		if (c == 0 || (c < 0 && c > 129))
			return ;
		printf("[%c]",c);
		current = current->next;
	}
}
