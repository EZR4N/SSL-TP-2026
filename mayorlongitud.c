#include "Strings.h"

int main(int argc, char **argv) {
    const char* longestString = NULL;
    int longestStringLength = 0;

    for(char **p = argv + 1; *p != NULL; p++) {
        const int length = GetLength(*p);
        if(length > longestStringLength) {
            longestString = *p;
            longestStringLength = length;
        }
    }

    if(longestString != NULL) {
        printf("String mas largo: %s, Longitud: %d\n", longestString, longestStringLength);
    } else {
        printf("Faltan argumentos\n");
    }

    return 0;
}