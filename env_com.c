#include <stdio.h>

int main() {
    char *env[2];

    if (fork() == 0) {
        env[0] = "HOME=/home/tysma";
        env[1] = "XD";
        env[2] = NULL;
        execle("com", "com", "-l", "lol", NULL, env);
        perror("Erreur execle()");
    }

    exit(0);
}