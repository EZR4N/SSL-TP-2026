#include "StringsTest.h"
#include "Strings.h"
#include <assert.h>

void TestIsEmpty() {
    // string vacio devuelve verdadero
    assert(IsEmpty(""));

    // string con caracteres devuelve falso
    assert(!IsEmpty("Hola"));
}

void TestGetLength() {
    // string vacio tiene longitud 0
    assert(GetLength("") == 0);

    // string con caracteres
    assert(GetLength("Hola") == 4);
}

void TestAreEqual() {
    // dos strings vacios son iguales
    assert(AreEqual("", ""));

    // strings iguales
    assert(AreEqual("Hola", "Hola"));

    // strings distintos con igual longitud
    assert(!AreEqual("Hola", "Chau"));

    // strings con distinta longitud
    assert(!AreEqual("Hola", "Hol"));
}

void TestAreDecimalDigits() {
    // string vacio devuelve verdadero
    assert(AreDecimalDigits(""));

    // string solo con digitos
    assert(AreDecimalDigits("12345"));

    // string con letras o caracteres invalidos
    assert(!AreDecimalDigits("123a5"));
}

void TestContains() {
    // string vacio no contiene nada
    assert(!Contains("", 'a'));

    // string contiene el caracter
    assert(Contains("Hola", 'a'));

    // string no contiene el caracter
    assert(!Contains("Hola", 'z'));
}

void TestConcatenate() {
    // si todos los strings son vacios, se devuelve string vacio
    assert(AreEqual(Concatenate((const char*[]){"", ""}, 2), ""));

    // si hay algun string vacío claramente no lo tiene en cuenta
    assert(AreEqual(Concatenate((const char*[]){"Hola", ""}, 2), "Hola"));

    // si hay solo 1 string
    assert(AreEqual(Concatenate((const char*[]){"Hola"}, 1), "Hola"));

    // caso más normal
    assert(AreEqual(Concatenate((const char*[]){"Ho", "la", " somos ", "el", " grupo", " 12."}, 6), "Hola somos el grupo 12."));
}

void TestPower() {
    // si el string es vacio, siempre devuelve string vacio
    assert(AreEqual(Power("", 10), ""));

    // si la potencia es 0, devuelve string vacio
    assert(AreEqual(Power("Hola", 0), ""));

    // si se potencia una vez devuelve el mismo string
    assert(AreEqual(Power("Hola", 1), "Hola"));

    // caso más normal
    assert(AreEqual(Power("Hola", 5), "HolaHolaHolaHolaHola"));
}

void TestReverse() {
    // si el string es vacio, devuelve string vacio
    assert(AreEqual(Reverse(""), ""));

    // caso más normal
    assert(AreEqual(Reverse("Hola, buenos dias!"), "!said soneub ,aloH"));
}

void TestStrings() {
    TestIsEmpty();
    TestGetLength();
    TestAreEqual();
    TestAreDecimalDigits();
    TestContains();
    TestConcatenate();
    TestPower();
    TestReverse();
}