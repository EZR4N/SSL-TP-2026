#include "Strings.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("No se proporcionaron cadenas.\n");
        return 0;
    }

    for (char **p = argv + 1; *p != NULL; p++) {
        const char *string = *p;
        const int length = GetLength(string);
        printf("%s: %d\n", string, length);
    }
    return 0;
}