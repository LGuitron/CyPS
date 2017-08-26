#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <future>

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;
using ::testing::TestInfo;

class EventListener : public EmptyTestEventListener
{
public: 
    
    std::ofstream bitacoras;
    virtual void OnTestProgramStart(const UnitTest& ut)
    {
        bitacoras.open ("bitacoras.txt");
    }
    
    virtual void OnTestStart(const ::testing::TestInfo& test_info)
    {
        bitacoras << "_____________________________________________\n";
        bitacoras <<"Test Case: "<< test_info.test_case_name()<<std::endl;
        bitacoras << "Test Name: "<< test_info.name()<<std::endl;
    }
    
    //time out 5 segs
    
    virtual void OnTestPartResult(const TestPartResult &tpr)
    {
        if(tpr.failed())
        {
            bitacoras << "Falló la prueba"<<std::endl;
            bitacoras << tpr.summary()<<std::endl;
            bitacoras << "Linea del error: "<<tpr.line_number()<<std::endl;
        }
    }
    
    virtual void OnTestEnd(const ::testing::TestInfo& test_info)
    {
        bitacoras << "Tiempo de ejecucion "<< UnitTest::GetInstance()->elapsed_time()<<std::endl;
    }
    
    virtual void OnTestProgramEnd(const UnitTest& ut)
    {
        bitacoras << "_____________________________________________\n";
        bitacoras << "El numero de tests ejecutado fue: " << ut.total_test_count() <<std::endl;
        bitacoras << "Tests correctos: "<< ut.successful_test_count() << std::endl;
        bitacoras << "Tests incorrectos: "<< ut.failed_test_count() <<std::endl;
        bitacoras.close();
    }
};

TEST(TcnUno,tname)
{    
    ASSERT_EQ(1,-1);
}

TEST(TcnUno, otroNombre)
{
    ASSERT_EQ(1,1);
}

TEST(tcnDos, nombre)
{
    ASSERT_EQ(0,0);
}

int main(int argc, char** argv)
{
    InitGoogleTest(&argc,argv);
    ::testing::TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_result_printer());
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}