#include "StringsTest.h"
#include "Strings.h"
#include <assert.h>

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
    TestConcatenate();
    TestPower();
    TestReverse();
}