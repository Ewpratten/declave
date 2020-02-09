#include <stdio.h>

void printHelp() { puts("declave help\n"); }

int main(int argc, char const *argv[]) {
    // Handle args help
    if (argc < 4) {
        printHelp();
        return 0;
    }

    printf("Filepath: %s\n", argv[1]);

    // Read start and end data
    // char start[] = argv[1];

    /* code */
    return 0;
}
