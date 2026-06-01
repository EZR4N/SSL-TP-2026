#include <stdio.h>
#include "Strings.h"
#include "Conversion.h" 

int main(int argc, char **argv) {
    int suma_total = 0;

    for (char **arg = argv + 1; *arg != NULL; arg++) {
        char *cadena = *arg;
        int signo = 1;

        if (*cadena == '-') {
            signo = -1;
            cadena++; 
        } else if (*cadena == '+') {
            cadena++; 
        }

        if (AreDecimalDigits(cadena)) {
            // suma_total += (ToInteger(cadena) * signo);
        }
    }

    printf("%d\n", suma_total);
    return 0;
}