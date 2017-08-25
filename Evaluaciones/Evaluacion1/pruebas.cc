#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>
#include "Scanner.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;
using ::testing::TestInfo;

class EventListener : public EmptyTestEventListener
{
    virtual void OnTestProgramEnd(const UnitTest& ut)
    {
        EXPECT_EQ(0, MemoryCheck::countA);
    }
};

TEST(TcnUno,tname)
{    
    Scanner* s = new Scanner;
    
    
    delete(s);
}

int main(int argc, char** argv)
{
    InitGoogleTest(&argc,argv);
    ::testing::TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    listeners.Append(new EventListener);
    
    return RUN_ALL_TESTS();
}
