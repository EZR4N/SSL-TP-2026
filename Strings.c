#include "Strings.h"
#define TRUE 1
#define FALSE 0
#define START_OF_ASCII_DECIMAL_DIGITS 48

int isADecimalDigit(const char ch) {
    return ch >= START_OF_ASCII_DECIMAL_DIGITS && ch < START_OF_ASCII_DECIMAL_DIGITS + 10;
}

int IsEmpty(const char *str) {
    return !GetLength(str);
}

int GetLength(const char *str) {
    int length = 0;
    while(str[length] != '\0')
        length++;

    return length;
}

int AreEqual(const char *str1, const char *str2) {
    const int firstStringLength = GetLength(str1);
    if(firstStringLength != GetLength(str2)) return FALSE;

    for(int i = 0; i < firstStringLength; i++)
     if(str1[i] != str2[i])
        return FALSE;
    
    return TRUE;
}

int AreDecimalDigits(const char *str) {
    for(int i = 0; str[i] != '\0'; i++) 
        if(!isADecimalDigit(str[i]))
            return FALSE;

    return TRUE;
}

int Contains(const char *str, const char ch) {
    for(int i = 0; str[i] != '\0'; i++) 
        if(str[i] == ch)
            return TRUE;
    
    return FALSE;
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

    char *poweredString = malloc(((stringLength * power) + 1) * sizeof(char));

    int currentLength = 0;

    for(int i = 0; i < power; i++) {
        for(int j = 0; j < stringLength; j++) {
            poweredString[currentLength] = string[j];
            currentLength++;
        }
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