#include "MemoryCheck.h"

int MemoryCheck::countA = 0;

MemoryCheck::MemoryCheck(){}

void* MemoryCheck::operator new(std::size_t n)
{
    std::cout << "NEW " << ++countA << " | size: " << n << std::endl;
    void* temp = ::operator new(n);
    return temp;
}

void* MemoryCheck::operator new[](std::size_t n)
{
    std::cout << "NEW " << ++countA << " | size: " << n << std::endl;
    void* temp = ::operator new(n);
    return temp;
}

void MemoryCheck::operator delete(void * p) 
{
    std::cout << "DEL " << --countA << std::endl;
    ::operator delete(p);
}

void MemoryCheck::operator delete[](void * p) 
{
    std::cout << "DEL " << --countA << std::endl;
    ::operator delete(p);
}
