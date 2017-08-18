#include "gtest/gtest.h"
#include "TypedValueParamEx.h"

using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;

template <class T>
class Fixture : public ::testing::TestWithParam<T>
{
public:
    T value;
};

typedef ::testing::Types<int,float,char> implementations;
TYPED_TEST_CASE(Fixture, implementations);

//Nombre del test debe ser igual al nombre de las implementaciones
TYPED_TEST(Fixture,implementations)
{
    printValue(GetParam());
}
