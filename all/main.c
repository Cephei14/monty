#include "monty.h"

info_t data;

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

void s_pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	while (current != NULL)
	{	
		printf("%d\n", current->n);
		current = current->next;
	}
}


void readfromfile()
{

	char *oneline = NULL;
	char str[1024];

	int i = 0;
	while(fgets(str,sizeof(str),data.mfile) != NULL)
	{
		oneline = strdup(str);
		checkline(oneline);
	}
}

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
			//else
				//in[i].f(&head, 0);
		}
		i++;
	}
	stack_t *current = head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        fprintf(stderr, "USAGE: %s file\n", av[0]);
        exit(EXIT_FAILURE);
    }
    data.mfile = fopen(av[1], "r");
    if (data.mfile == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
	readfromfile();
    fclose(data.mfile);
    return 0;
}
