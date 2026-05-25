#include "Strings.h"
#define TRUE 1
#define FALSE 0

int IsEmpty(const char *str) {

}

int GetLength(const char *str) {

}

int AreEqual(const char *str1, const char *str2) {

}

int AreDecimalDigits(const char *str) {

}

int Contains(const char *str, const char ch) {

}

// OPERACION A DEFINIR

char* Concatenate(const char *stringArray[], const int arrayLength) {
    // empieza en 1 ya que al final esta el '\0'
    int totalLength = 1;

    for(int i = 0; i < arrayLength; i++) {
        totalLength += GetLength(stringArray[i]);
    }

    char *concatenatedString = malloc(totalLength * sizeof(char));

    int currentLength = 0;

    for(int i = 0; i < arrayLength; i++) {
        const char *string = stringArray[i];
        
        for(int j = 0; string[j] != '\0'; j++) {
            concatenatedString[currentLength] = string[j];
            currentLength++;
        }
    }

    concatenatedString[currentLength] = '\0';

    return concatenatedString;
}

char* Power(const char *string, const int power) {
    const int stringLength = GetLength(string);

    const int totalLength = stringLength * power;

    char *poweredString = malloc((totalLength + 1) * sizeof(char));

    int currentLength = 0;

    for(int i = 0; i < totalLength; i++) {
        poweredString[i] = string[i % stringLength];
    }

    poweredString[currentLength] = '\0';

    return poweredString;
}

// OPERACION EXTRA

char* Reverse(const char *string) {
    const int stringLength = GetLength(string);

    char *reversedString = malloc((stringLength + 1) * sizeof(char));

    int currentLength = 0;

    while(currentLength < stringLength) {
        reversedString[currentLength] = string[stringLength - 1 - currentLength];
        currentLength++;
    }

    reversedString[currentLength] = '\0';
    
    return reversedString;
}