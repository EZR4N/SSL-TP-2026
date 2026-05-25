#ifndef STRINGS_H
#define STRINGS_H

int IsEmpty(const char *str);

int GetLength(const char *str);

int AreEqual(const char *str1, const char *str2);

int AreDecimalDigits(const char *str);

int Contains(const char *str, const char ch);

// OPERACION A DEFINIR

char* Concatenate(const char *stringArray[], const int arrayLength);

char* Power(const char *string, const int power);

// OPERACION EXTRA

char* Reverse(const char *string);

#endif