#ifndef COMMANDS_H
#define COMMANDS_H

typedef struct {
    void (*execute)(void);
} Commands;

void execute_command(Commands *cmd);

#endif /* COMMANDS_H */
