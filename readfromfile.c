#include "monty.h"

/**
 * readfromfile - function that check a file line by line
 * Return: nothing
 */

void readfromfile(void)
{
	stack_t *head = NULL;
	char *oneline = NULL;
	char str[1024];

	data.line = 1;
	while (fgets(str, sizeof(str), data.mfile) != NULL)
	{
		oneline = ft_strdup(str);
		checkline(oneline, &head);
		free(oneline);
		data.line++;
	}
	s_free(head);
}

/**
 * ft_strdup - function that duplicate a string
 * @s1: function to duplicate
 * Return: pointer to the new duplicated string
 */

char    *ft_strdup(const char *s1)
{
	char    *p;
	int        i;
	int        len;

	i = -1;
	len = strlen((char *)s1);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (++i < len && s1[i])
		*(p + i) = s1[i];
	*(p + i) = 0;
	return (p);
}
