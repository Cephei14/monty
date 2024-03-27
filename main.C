#include "monty.h"
size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if(s == NULL)
		return(0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *reserve, char *buffer)
{
	char	*new_reserve;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!reserve && buffer != NULL)
		return (strdup(buffer));
	if (!buffer)
		return (reserve);
	new_reserve = (char *)malloc(ft_strlen(reserve) + ft_strlen(buffer) + 1);
	if (!new_reserve)
		return (NULL);
	while (reserve[i])
	{
		new_reserve[i] = reserve[i];
		i++;
	}
	while (buffer[j])
		new_reserve[i++] = buffer[j++];
	new_reserve[i] = '\0';
	free(reserve);
	reserve = NULL;
	return (new_reserve);
}

char *readfromfile(char **file,FILE *fd)
{
	char *onelinefile = NULL;
	char str[1024];

	
	while(fgets(str,sizeof(str),fd) != NULL)
	{
		onelinefile = ft_strjoin(onelinefile,str);
		fgets(str,sizeof(str),fd);
	}
	printf("%s\n",onelinefile);
	return(onelinefile);
}
int main(int ac, char **av)
{
        char *token;
		info_t data;

	if (ac == 2)
	{

	        data.mfile = fopen(av[1], "r");
	        if (data.mfile == NULL)
	                return 1;
			readfromfile(data.file,data.mfile);
	        // fgets(info.line, sizeof(info.line), info.mfile);
	        // token = strtok(info.line, " ");
	        // token = strtok(NULL, " ");
        	// printf("%s\n",token);
	}
	else
		printf("USAGE: monty file");
}
