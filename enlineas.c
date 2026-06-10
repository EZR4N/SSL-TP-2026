// interpreto que lo que se debe hacer es imprimir cada uno en una linea

int main(int argc, char *argv[]) {
    for(int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}