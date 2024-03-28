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
		case 9:
		{
			fprintf(stderr, "L%d: can't div, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 8:
		{
			fprintf(stderr, "L%d: can't sub, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
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

/**
 * p_error1 - function that print an error code based on different case
 * @i: case number
 * Return: Nothing
 */

void p_error1(int i)
{
	switch (i)
	{
		case 14:
		{
			fprintf(stderr, "\n");
			exit(EXIT_FAILURE);
			break;
		}
		case 13:
		{
			fprintf(stderr, "\n");
			exit(EXIT_FAILURE);
			break;
		}
		case 12:
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 11:
		{
			fprintf(stderr, "L%d: can't mod, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		case 10:
		{
			fprintf(stderr, "L%d: can't mul, stack too short\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		default:
			break;
	}
}

/**
 * p_error2 - function that print an error code based on different case
 * @i: case number
 * Return: Nothing
 */

void p_error2(int i)
{
	switch (i)
	{
		case 15:
		{
			fprintf(stderr, "L%d: division by zero\n", data.line);
			exit(EXIT_FAILURE);
			break;
		}
		default:
			break;
	}
}
