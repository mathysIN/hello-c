#include <stdio.h>
#include <stdlib.h>

int main() {
    char * terminal; 
    char * login;
    terminal = getenv("TERM");
    login = getenv("LOGNAME");

    printf("Vous vous êtes connecté sous le nom de : %s\n", login);
    printf("Le terminal est : ");
    if(terminal == NULL) printf("Inconnu");
    else printf(terminal);
    printf("\n");
    return 0;
}