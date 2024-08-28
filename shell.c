#include "shell.h"
/**
 * main -is the entry point of my program
 * @argc: arggument count to the main function
 * @argv: The pointer to an array of argument values
 *
 * Return: ALways 0 upon success.
 */
int main(int argc, char **argv)
{
	(void)argc, (void)argv;

	char *buff = NULL;
	ssize_t input_size;
	size_t buff_size = 0;
	char **arr;

	while (1)
	{
		disp_prompt();
		input_size = read_input(&buf, &count);
		if (input_size == -1)
		{
			perror("Shell Exited");
			free(buff);
			exit(EXIT_FAILURE);
		}

		array = parse_input(buf);
		if (arr[0] != NULL)
		 {
			execute_command(arr);
		}

		free(arr);
	}

	free(buff);
	return (0);
}
