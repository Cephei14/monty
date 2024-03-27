#include "monty.h"

info_t data;
void s_push(mystack_t **head, unsigned int counter)
{
    mystack_t *new_node = (mystack_t*)malloc(sizeof(mystack_t));
	(void)counter;

    if (new_node == NULL)
    {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }

    if (*head != NULL)
        (*head)->prev = new_node;
    new_node->n = data.n;
	new_node->next = *head;
	new_node->prev = NULL;
    (*head) = new_node;
}

void s_pall(mystack_t **head, unsigned int counter)
{
	mystack_t *current = *head;
	(void)counter;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

void s_pint(mystack_t **head, unsigned int counter)
{
	mystack_t *current = *head;
	(void)counter;
	printf("%d\n",current->n);
}

void s_pop(mystack_t **head, unsigned int counter)
{
	mystack_t *current = (*head)->next;
	(void)counter;
	free(*head);
	*head = current;
}

void s_swap(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
    int temp = top1->n;

	(void)counter;
    top1->n = top2->n;
    top2->n = temp;
}

void s_add(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top1->n + top2->n;
	s_pop(head,0);
}

void s_nop(mystack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
}

void s_sub(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n - top1->n;
	s_pop(head,0);
}

void s_div(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n / top1->n;
	s_pop(head,0);
}

void s_mul(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n * top1->n;
	s_pop(head,0);
}

void s_mod(mystack_t **head, unsigned int counter)
{
	mystack_t *top1 = *head;
    mystack_t *top2 = top1->next;
	(void)counter;

	top2->n = top2->n % top1->n;
	s_pop(head,0);
}

void s_pchar(mystack_t **head, unsigned int counter)
{
	char c = (*head)->n;
	printf("%c\n",c);
}

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
void readfromfile(void)
{
	mystack_t *head = NULL;
	char *oneline = NULL;
	char str[1024];

	while(fgets(str,sizeof(str),data.mfile) != NULL)
	{
		oneline = strdup(str);
		checkline(oneline, &head);
	}
}

void checkline(char *str, mystack_t **head)
{
	char *token = NULL;
	int i;
	instruction_t in[13] = {
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

	};
	
	token = strtok(str, " \t\n\r");
	i = 0;
	while (i < 13)
	{
		if (strcmp(in[i].opcode, token) == 0)
		{
			if (strcmp(token,"push") == 0)
			{
				token = strtok(NULL, " \t\n\r");
				data.n = atoi(token);
				s_push(head, 0);
			}
			else
				in[i].f(head, 0);
		}
		i++;
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
