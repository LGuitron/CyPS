#include "gtest/gtest.h"
#include "valueParametrized.h"

using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;

class Fixture : public ::testing::TestWithParam<int>{};
class Chars: public::testing::TestWithParam<char>{};
class Bools: public::testing::TestWithParam<bool>{};
class IntComb: public::testing::TestWithParam<::testing::tuple<int,int>>
{
public:
    int value1 = ::testing::get<0>(GetParam());
    int value2 = ::testing::get<1>(GetParam());
};

TEST_P(Fixture, testA)
{
    printValue(GetParam());
}

TEST_P(Chars, testB)
{
    printValue(GetParam());
}

TEST_P(Bools, testC)
{
    printValue(GetParam());
}

TEST_P(IntComb, testD)
{
    printValues(value1,value2);
}

//Fixture Test
INSTANTIATE_TEST_CASE_P(enteros, Fixture, Values(1,2,3,4,5));

//Chars Test
char arrayC [] = {'a','b','c','d','e','f','g'};
INSTANTIATE_TEST_CASE_P(caracteres, Chars, ValuesIn(arrayC));

//Bools Test
INSTANTIATE_TEST_CASE_P(booleanos, Bools, Bool());

//Int combination Test
INSTANTIATE_TEST_CASE_P(CombinacionEnteros, IntComb, Combine(Range(10,100,1), Range(10,100,1)));

