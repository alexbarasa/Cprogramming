#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1024

int main(void)
{
	char *command, *token;
	size_t bufsize, input_length;
	int status, i;
	char *args[MAX_COMMAND_LENGTH];
	pid_t pid;

	command = NULL;
	bufsize = 0;
	while (1)
	{
		printf("$ ");
		fflush(stdout);
		input_length = getline(&command, &bufsize, stdin);
		if(input_length == -1)
		{
			if (feof(stdin))
			{
				printf("\n");
				break;
			}
			else
			{
				perror("getline");
				exit(EXIT_FAILURE);
			}
		}
		if (command[input_length -1] == '\n')
			command[input_length -1] = '\0';
		token = strtok(command, " ");
		i = 0;
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;
		/* Fork the child process */
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			/* child process */
			execvp(args[0], args);
			perror("execvp");
			exit(EXIT_FAILURE);
		}
		else
		{
			/* Parent process
			 * Wait for the child to terminate */
			waitpid(pid, &status, 0);
			/* check if the child terminated normally */
			if (WIFEXITED(status))
				printf("Child process exited with status %d\n", WEXITSTATUS(status));
			else if (WIFSIGNALED(status))
				printf("child process terminated by signal %d\n", WTERMSIG(status));
		}
	}
	free(command);
	return (0);
}
