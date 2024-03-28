#include "monty.h"

/**
 * check_int - function that check if a string containing only integer
 * @token: the string to be checked
 * Return: 0 of it contain another char or 1 of only int
 */

int check_int(char *token)
{
	int i;

	i = 0;
	if (token[0] == '-')
		i++;
	while (token[i] != '\0')
	{
		if (isdigit(token[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
