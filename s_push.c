#include "monty.h"

/**
 * s_push - function that push new node to the stack
 * @head: head of the stack
 * @counter: not used parameter
 * Return: nothing
*/

void s_push(mystack_t **head, unsigned int counter)
{
	mystack_t *new_node = (mystack_t *)malloc(sizeof(mystack_t));
	(void)counter;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->n = data.n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head) = new_node;
}
