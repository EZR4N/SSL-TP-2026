#include "ConversionTest.h"
#include "Conversion.h"
#include <assert.h>

void TestToInteger(){
    assert(ToInteger("-1") == -1);
    assert(ToInteger("-255") == -255);
    assert(ToInteger("-0") == 0);
    assert(ToInteger("0") == 0);
    assert(ToInteger("1") == 1);
    assert(ToInteger("255") == 255);
}

void TestConversion() {
    TestToInteger();
}