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

char **readfromfile(info_t *data)
{
	char *onelinefile = NULL;
	char str[1024];
	data->filelen = 0;

	
	while(fgets(str,sizeof(str),data->mfile) != NULL)
	{
		onelinefile = ft_strjoin(onelinefile,str);
		data->filelen++;
	}
	data->file = ft_split(onelinefile,'\n');
	free(onelinefile);
	return (data->file);
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
			data.file = readfromfile(&data);
			int i = 0;
			while(i < 6)
			{
				printf("%s\n",data.file[i]);
				i++;
			}
	}
	else
		printf("USAGE: monty file");
}
