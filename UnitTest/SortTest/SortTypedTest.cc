#include "gtest/gtest.h"
#include "Hierarchy.h"


template <class T>
class intFixture : public::testing::Test
{
public:
    void SetUp()
    {
        sortType = new T;
    }
    
    void TearDown()
    {
        delete sortType;
    }
    Sort<int>* sortType;
};

typedef ::testing::Types<BubbleSort<int>,InsertionSort<int>,stlSort<int>> implementations;
TYPED_TEST_CASE(intFixture, implementations);

TYPED_TEST(intFixture,implementations)
{
    int data[10] = {1,3,6,2,4,5,7,0,9,8};
    std::vector<int> dataVector (data, data+10);  
    this->sortType->sort(&dataVector);
    printVector(dataVector);
}
