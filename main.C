#include "monty.h"

int main(int ac, char **av)
{
        char *token;

	if (ac == 2)
	{

	        info.mfile = fopen(*av[1], "r");
	        if (info.mfile == NULL)
	                return 1;
	        fgets(info.line, sizeof(info.line), file);
	        token = strtok(buffer, " ");
	        token = strtok(NULL, " ");
        	printf("%s\n",token);
	}
	else
		printf("USAGE: monty file);
}
