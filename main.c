#include "monty.h"

extern info_t data;

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
