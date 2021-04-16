#include <stdio.h>
#include <string.h>

#include "led.h"
#include "shell.h"

int echo(int argc, char **argv)
{
    puts(argv[1]);
    (void)argc;
    (void)argv;

    return 0;
}

int led(int argc, char **argv)
{
    LED0_TOGGLE;
    (void)argc;
    (void)argv;

    return 0;
}

static const shell_command_t commands[] = {
    { "echo", "This is the helpful help for echo", echo },
    { "led", "Toggle LED", led },
    { NULL, NULL, NULL }
};

int main(void)
{
    puts("This is Task-02");

    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(commands, line_buf, SHELL_DEFAULT_BUFSIZE);

    return 0;
}
