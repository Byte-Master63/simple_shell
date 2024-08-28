#include "shell.h"
/**
 * my_printer - Writes a string to standard output.
 * @string: The string to be written to standard output.
 *
 * This function writes the provided string to the standard output
 * using the write system call. It determines the length of the string
 * using strlen and then writes it to the file descriptor STDOUT_FILENO.
 *
 * Return: void
 */
void my_printer(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
