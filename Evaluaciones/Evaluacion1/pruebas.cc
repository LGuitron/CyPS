#include "gtest/gtest.h"
#include "Scanner.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;

class ParamTests : public ::testing::TestWithParam<int>
{
    public: 
        Scanner* s;
        ParamTests() { s = new Scanner;}
        ~ParamTests() {delete s;}
};

class EventListener : public EmptyTestEventListener
{
    virtual void OnTestProgramEnd(const UnitTest& ut)
    {
        EXPECT_EQ(0, MemoryCheck::countA);
    }
};

TEST_P(ParamTests, pruebaValores)
{
    EXPECT_FALSE(s->verificarAbierto(GetParam()));
}

int arrayPorts [] = {90,100,110,120,130};
INSTANTIATE_TEST_CASE_P(PuertosEnArreglo, ParamTests, ValuesIn(arrayPorts));
INSTANTIATE_TEST_CASE_P(PuertosEspecificos, ParamTests, Values(68,80,443,5353,8080));
INSTANTIATE_TEST_CASE_P(Puerto1_a_Puerto100, ParamTests, Range(10,50,1));

int main(int argc, char** argv)
{
    InitGoogleTest(&argc,argv);
    ::testing::TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}
