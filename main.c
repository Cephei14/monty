#include "monty.h"


info_t data = {0, NULL, NULL};
/**
 * main - main function
 * @ac: number of args
 * @av: value of args
 * Return: nothing
 */

int main(int ac, char **av)
{
	if (ac != 2)
		p_error(0, NULL, NULL);
	data.mfile = fopen(av[1], "r");
	if (data.mfile == NULL)
		p_error(1, av[1], NULL);
	readfromfile();
	fclose(data.mfile);
	return (0);
}
