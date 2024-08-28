#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void my_printer(const char *string);
void disp_prompt(void);
void execute_command(char **arr);
char **parse_input(char *buff);
ssize_t read_input(char **buff, size_t *buff_size);

#endif /*SHELL_H*/
