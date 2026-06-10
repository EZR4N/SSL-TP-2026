#include "Strings.h"

int main(int argc, char *argv[]) {
    const char* longestString = NULL;
    int longestStringLength = 0;

    for(int i = 1; i < argc; i++) {
        const char* string = argv[i];
        const int length = GetLength(string);
        if(length > longestStringLength) {
            longestString = string;
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