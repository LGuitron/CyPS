#include "gtest/gtest.h"
#include "TypedValueParamEx.h"

using ::testing::Values;
using ::testing::ValuesIn;

class Fixture : public::testing::TestWithParam<StringAndPointer>{};

//INTEGERS//
int* ints_p= new int(3);
StringAndPointer ints(ints_p,"int");

//CHARS//
char* chars_p = new char('t');
StringAndPointer chars(chars_p,"char");

//FLOATS//
float* floats_p = new float(4.5f);
StringAndPointer floats(floats_p,"float");

TEST_P(Fixture, Tests)
{
    printValue(GetParam());
}

INSTANTIATE_TEST_CASE_P(Ints, Fixture, Values(ints));
INSTANTIATE_TEST_CASE_P(Chars, Fixture, Values(chars));
INSTANTIATE_TEST_CASE_P(Floats, Fixture, Values(floats));
