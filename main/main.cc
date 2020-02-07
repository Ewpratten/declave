#include <iostream>
#include <string>

void printHelp() { std::cout << "declave help:" << std::endl; }

int main(int argc, char const *argv[]) {
    // Handle args help
    if (argc < 3) {
        printHelp();
        return 0;
    }


    // Read start and end data
    char start[] = argv[1];

    /* code */
    return 0;
}
