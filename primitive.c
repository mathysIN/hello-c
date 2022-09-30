#include <stdio.h>
#include <stdlib.h>

int main() {
    char *argv[4] = {"ls", "-l", "/", NULL};

    execv("/bin/ls", argv);
    execl("/bin/ls", "ls", "-l", "/", NULL);
    execlp("ls", "ls", "-l", "/", NULL);

    return 0;
}