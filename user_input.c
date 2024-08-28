#include "shell.h"
/**
 * read_input - Reads a line of input from standard input.
 * @buff: Pointer to the buffer where the input will be stored.
 * @buff_size: Pointer to the size of the buffer.
 *
 * This function reads an entire line of input from the standard input
 * using the getline function. It stores the input in the buffer pointed
 * to by @buff and adjusts the size of the buffer as needed.
 *
 * Return: The number of characters read (including the newline character),
 *         or -1 if an error occurs or EOF is encountered.
 */
ssize_t read_input(char **buff, size_t *buff_size)
{
	return (getline(buff, buff_size, stdin));
}
