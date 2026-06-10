#include "Strings.h"

int main(int argc, char *argv[]) {
    if(argc == 1) {
        printf("No se proporcionaron cadenas.\n");
        return 0;
    }

    for(int i = 1; i < argc; i++) {
        const char* string = argv[i];
        const int length = GetLength(string);
        printf("%s: %d\n", string, length);
    }

    return 0;
}