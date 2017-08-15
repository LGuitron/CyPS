#include "gtest/gtest.h"
#include <exception>

/////////////////BASIC ASSERTION///////////////
TEST(BasicAssert, ExpectTrue)
{
    EXPECT_FALSE(true);
}

TEST(BasicAssert, AssertTrue)
{
    ASSERT_TRUE(true);
}

/////////////////EXPLICIT SUCCESS OF FAILURE////////////////
TEST(Explicit, Succeed)
{
    SUCCEED();
}

TEST(Explicit, Fail)
{
    FAIL();
}

TEST(Explicit, AddFail)
{
    ADD_FAILURE();
}

////////////////BINARY COMPARISON////////////////
TEST(BinaryComparison,EQ)
{
    EXPECT_EQ(1,0);
}

TEST(BinaryComparison,NE)
{
    EXPECT_NE(1,0);
}

TEST(BinaryComparison,LT)
{
    EXPECT_LT(1,0);
}

TEST(BinaryComparison,LE)
{
    EXPECT_LE(1,0);
}

TEST(BinaryComparison,GT)
{
    EXPECT_GT(1,0);
}

TEST(BinaryComparison,GE)
{
    EXPECT_GE(1,0);
}

/////////////////STRING COMPARISON/////////////////////
TEST(StringCompare, Equality)
{
    ASSERT_STREQ("hola","hol");
}

TEST(StringCompare, EqualityWithoutCase)
{
    EXPECT_STRCASEEQ("AbC","aBc");
}


//////////////////EXCEPTION ASSERTIONS////////////////////////
void throwException()
{
    throw std::invalid_argument( "Argumento invalido" );
}

TEST(Exceptions, Throw)
{
    EXPECT_THROW(throwException(),std::invalid_argument);
}

TEST(Exceptions,AnyThrow)
{
    EXPECT_ANY_THROW(throwException());
}

TEST(Exceptions, NoThrow)
{
    EXPECT_NO_THROW(throwException());
}

//////////////////FLOATING POINT COMPARISON///////////////////
TEST(FloatCompare, FloatEQ)
{
    EXPECT_FLOAT_EQ(1.5,1.5);
}

TEST(FloatCompare, DoubleEQ)
{
    EXPECT_DOUBLE_EQ(1.5,1.5);
}

TEST(FloatCompare, NEAR)
{
    EXPECT_NEAR(1.5,1.5,1.6);
}

