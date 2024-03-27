#include "monty.h"

void checkline(char *str)
{
	stack_t *head = NULL;
	char *token = NULL;
	int i;
	int n;
	instruction_t in[2] = {
		{"push", s_push},
		{"pall", s_pall},
	};
	
	token = strtok(str, " \t\n\r");
	i = 0;
	while (i < 2)
	{
		if (strcmp(in[i].opcode, token) == 0)
		{
			if (strcmp(token,"push") == 0)
			{		
				token = strtok(NULL, " \t\n\r");
				data.n = atoi(token);
				s_push(&head, 0);
			}
			else
				in[i].f(&head, 0);
		}
		i++;
	}
}
