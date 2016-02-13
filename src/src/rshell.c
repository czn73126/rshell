/*
 * =====================================================================================
 *       Filename:  rshell.c
 *        Version:  1.0
 * =====================================================================================
 */
#include "rshell.h"
#define TRUE 1

void proc(void)
{
    int status,i;
    char *command;
    char **parameters;
    parameters = malloc(sizeof(char *)*(MAXARG+1));
    while(TRUE)
    {
        type_prompt();
        if(-1 == read_command(&command,parameters))
			continue;
        if(fork()!=0)
        {
            waitpid(-1,&status,0);
        }
        else
        {
            execve(command,parameters,0);
        }
    }
}

int main() {
    proc();
    return 0;
}
