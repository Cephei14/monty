#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *file;
	char buffer[1024];
	char *token;

	file = fopen("text.txt", "r");
	if (file == NULL)
		return 1;
	fgets(buffer, sizeof(buffer), file);
	token = strtok(buffer, " ");
	token = strtok(NULL, " ");
	printf("%s\n",token);
}
