#include "monty.h"

void s_push(stack_t **head, unsigned int counter)
{
    stack_t *new_node = (stack_t*)malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }

	new_node->prev = NULL;
    new_node->n = data.n;
	new_node->next = *head;
    if (*head != NULL)
        (*head)->prev = new_node;
    (*head) = new_node;
}
