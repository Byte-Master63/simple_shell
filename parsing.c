#include "shell.h"
/**
 * parse_input - Parses a string into an array of arguments.
 * @buff: The input string to be parsed.
 *
 * This function takes a string input and splits it into individual
 * tokens (arguments) based on spaces and newline characters.
 * It stores the tokens in an array of strings, which is dynamically
 * allocated. The array is terminated with a NULL pointer.
 *
 * Return: A pointer to the array of strings (arguments).
 *         If memory allocation fails, the function prints an error message
 *         and exits the program with a failure status.
 */
char **parse_input(char *buff)
{
	char *tkn;
	char **arr = malloc(sizeof(char *) * 1024);
	int i = 0;

	if (arr == NULL)
	{
		perror("Malloc failed");
		exit(EXIT_FAILURE);
	}
	tkn = strtok(buff, " \n");
	while (tkn)
	{
		arr[i] = tkn;
		tkn = strtok(NULL, " \n");
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
