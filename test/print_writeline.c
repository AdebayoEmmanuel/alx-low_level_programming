#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(char *argv[])
{
	int *i;
	int *lent = malloc(sizeof(argv));

	for (i = 0; i<lent-1; i++)
	{
		printf("%s", argv[i]);
	}	
	
	free(lent);
	return (0);
}
