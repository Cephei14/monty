#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct info_s - struct that contain informations about the monty file
 * @n: data to be stored in the stack
 * @line: the strings of each line inside the monty file
 * @mfile: File descriptor of the monty file
 * Description: this structure is made to help handling the insturctions
 * inside the monty file
*/

typedef struct info_s
{
	int n;
	int line;
	FILE *mfile;
}  info_t;

extern info_t data;

void readfromfile(void);
void checkline(char *str, stack_t **head);
void p_error(int i, char *str, char *token);
void p_error0(int i);
void p_error1(int i);
void p_error2(int i);
int check_int(char *token);
char *ft_strdup(const char *s1);
void s_free(stack_t *head);
void s_push(stack_t **head, unsigned int counter);
void s_pall(stack_t **head, unsigned int counter);
void s_pint(stack_t **head, unsigned int counter);
void s_pop(stack_t **head, unsigned int counter);
void s_swap(stack_t **head, unsigned int counter);
void s_add(stack_t **head, unsigned int counter);
void s_nop(stack_t **head, unsigned int counter);
void s_sub(stack_t **head, unsigned int counter);
void s_div(stack_t **head, unsigned int counter);
void s_mul(stack_t **head, unsigned int counter);
void s_mod(stack_t **head, unsigned int counter);
void s_pchar(stack_t **head, unsigned int counter);
void s_pstr(stack_t **head, unsigned int counter);

#endif
