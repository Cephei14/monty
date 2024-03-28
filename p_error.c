#include "monty.h"

/**
 * p_error - function that print an error code based on different case
 * @i: case number
 * @str: name of the file
 * @token: the name of the opcode
 * Return: Nothing
 */

void p_error(int i, char *str, char *token)
{
	switch (i)
	{
		case 0:
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
			break;
		}
		case 1:
		{
			fprintf(stderr, "Error: Can't open file %s\n", str);
			exit(EXIT_FAILURE);
			break;
		}
		case 2:
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", data.line, token);
			exit(EXIT_FAILURE);
			break;
		}
		case 3:
		{
			fprintf(stderr, "L%d: usage: push integer\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 4:
		{
			fprintf(stderr, "L%d: can't pint, stack empty\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		default:
			break;
	}
}

/**
 * p_error0 - function that print an error code based on different case
 * @i: case number
 * Return: Nothing
 */

void p_error0(int i)
{
	switch (i)
	{
		case 7:
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 6:
		{
			fprintf(stderr, "L%d: can't swap, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 5:
		{
			fprintf(stderr, "L%d: can't pop an empty stack\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		default:
			break;
	}
}
