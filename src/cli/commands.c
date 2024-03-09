#include <stdio.h>
#include "commands.h"

void concrete_command_execute(void) {
    printf("Executing concrete command...\n");
}

void execute_command(Commands *cmd) {
    cmd->execute();
}
