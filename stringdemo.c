#include <string.h>
#include <stdio.h>

int main(int argc, char* argv)
{
	int lcnt = 0;
	FILE *fp = fopen("testdata.txt", "r");
	char buf[1024];
	printf("Loading...");
	char *ptr;
	while ((ptr = fgets(buf, 1024, fp) != NULL))
	{
		buf[strlen(buf) - 1] = 0;
		lcnt++;
		char *tok;
		tok = strtok(buf, " \t\n");
		while (tok != NULL)
		{
			printf("[%s]\n", tok);
			tok = strtok(NULL, " \t\n");
		}
	}
	printf("done... %d lines read\n", lcnt);
	return (0);
}
