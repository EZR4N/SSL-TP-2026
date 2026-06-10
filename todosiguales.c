#include <stdio.h>
#include "Strings.h" 

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("1\n");
        return 0;
    }

    char *primer_argumento = *(argv + 1);
    int todos_iguales = 1;


    for (char **arg = argv + 2; *arg != NULL; arg++) {
        if (AreEqual(primer_argumento, *arg) == 0) { // 0 asumiendo que FALSE es 0
            todos_iguales = 0;
            break;
        }
    }

    printf("%d\n", todos_iguales);
    return 0;
}