#include <iostream>
template <class T>
void printValue(T value)
{
    std::cout<<value<<std::endl;
}

template <class T>
void printValues(T value1, T value2)
{
    std::cout<<value1<<" , "<<value2<<std::endl;
}
