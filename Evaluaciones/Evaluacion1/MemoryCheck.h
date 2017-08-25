#include <stdlib.h>
#include <iostream>

class MemoryCheck 
{
public: 
    static int countA;
    MemoryCheck();
    void* operator new(std::size_t n);
    void* operator new[](std::size_t n);
    void operator delete(void * p);
    void operator delete[](void * p);
};
