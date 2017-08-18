#include "gtest/gtest.h"
#include "Pila.h"

class TestStack : public::testing::Test
{
public:
    //En setup y teardown se deben utilizar atributos estaticos
    void SetUp()
    {
        myst.push(10);
        myst.push(20);
    }
    void TearDown()
    {
        
    }
    
    myStack<int> myst;
};

TEST_F(TestStack, pushTest)
{
    myst.push(30);
    myst.push(40);
    EXPECT_EQ(4,myst.size());
}

//Pruebas con fixtures son independientes
//cada prueba crear una nueva instancia de la clase
TEST_F(TestStack, popTest)
{
    myst.pop();
    myst.pop();
    EXPECT_EQ(2,myst.size());
}
