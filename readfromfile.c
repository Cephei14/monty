#include "monty.h"

/**
 * readfromfile - function that check a file line by line
 * Return: nothing
 */

void readfromfile(void)
{
	mystack_t *head = NULL;
	char *oneline = NULL;
	char str[1024];

	data.line = 1;
	while (fgets(str, sizeof(str), data.mfile) != NULL)
	{
		oneline = strdup(str);
		checkline(oneline, &head);
		data.line++;
	}
}
