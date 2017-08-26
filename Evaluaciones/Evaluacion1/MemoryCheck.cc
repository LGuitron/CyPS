#include "MemoryCheck.h"

int MemoryCheck::countA = 0;

MemoryCheck::MemoryCheck(){}

void* MemoryCheck::operator new(std::size_t n)
{
    ++countA;
    void* temp = ::operator new(n);
    return temp;
}

void* MemoryCheck::operator new[](std::size_t n)
{
    ++countA;
    void* temp = ::operator new(n);
    return temp;
}

void MemoryCheck::operator delete(void * p) 
{
    --countA;
    ::operator delete(p);
}

void MemoryCheck::operator delete[](void * p) 
{
    --countA;
    ::operator delete(p);
}
