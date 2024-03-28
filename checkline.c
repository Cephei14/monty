#include "monty.h"

/**
 * checkline - function thay analyse data in each line
 * and call a function based on the opcode
 * @str: the line
 * @head: the head of the stack
 * Return: Nothing
 */

void checkline(char *str, mystack_t **head)
{
	char *token = NULL;
	int i;

	instruction_t in[14] = {
		{"push", s_push},
		{"pall", s_pall},
		{"pint", s_pint},
		{"pop", s_pop},
		{"swap", s_swap},
		{"add", s_add},
		{"nop", s_nop},
		{"sub", s_sub},
		{"div", s_div},
		{"mul", s_mul},
		{"mod", s_mod},
		{"pchar", s_pchar},
		{"pstr", s_pstr},
		{NULL, NULL},

	};
	token = strtok(str, " \t\n\r");
	i = 0;
	while (i < 14 && token != NULL)
	{
		if (strcmp(in[i].opcode, token) == 0)
		{
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, " \t\n\r");
				if (token == NULL || !check_int(token))
					p_error(3, NULL, NULL);
				data.n = atoi(token);
			}
			in[i].f(head, 0);
			break;
		}
		i++;
		if (i == 13)
			p_error(2, NULL, token);
	}
}
