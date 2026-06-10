#include "Conversion.h"

int ToInteger(char *str) {
    int resultado = 0;
    int signo = 1;

    for (int i = 0; str[i] != '\0'; i++) {
      if (i == 0 && str[0] == '-') {
            signo = -1;
            i = 1;
        }
    
        resultado = resultado * 10 + (str[i] - '0');
    }

    return signo * resultado;
}