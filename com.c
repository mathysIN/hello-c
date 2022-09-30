#include <stdio.h>

int main(int argc, char *argv[], char *arge[]) {
    int i;
    for(i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    while(*arge != NULL) {
        printf("%s\n", *arge++);
    }

    return 0;
}