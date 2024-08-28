#include "shell.h"
/**
 * execute_command - Forks a child process to execute a command.
 * @arr: An array of arguments where the first element is the command.
 *
 * This function creates a new child process using fork. The child process
 * attempts to execute the command specified in the first element of @arr
 * using the execve system call. If execve fails, an error message is printed,
 * and the child process exits. The parent process waits for the child process
 * to complete before continuing.
 *
 * Return: void
 */
void execute_command(char **arr)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Failed to create process");
		exit(EXIT_FAILURE);
	}

	if (child_pid == 0)
	{
		if (execve(arr[0], arr, NULL) == -1)
		{
			perror("Couldn't  execute command");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;

		wait(&status);
	}
}
