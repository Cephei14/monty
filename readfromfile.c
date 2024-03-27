#include "monty.h"

void readfromfile()
{
	char *oneline = NULL;
	char str[1024];

	int i = 0;
	while(fgets(str,sizeof(str),data.mfile) != NULL)
	{
		oneline = strdup(str);
		checkline(oneline);
	}
}
