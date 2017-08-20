#include <iostream>
#include "StringAndPointer.h"
void printValue(StringAndPointer value)
{
    if(value.str=="int")
    {
        int* intVal = static_cast<int *>(value.ptr);
        std::cout<<"Int: "<<*intVal<<std::endl;
    }
    
    else if(value.str=="char")
    {
        char* charVal = static_cast<char *>(value.ptr);
        std::cout<<"Char: "<<*charVal<<std::endl;
    }
    
    else if(value.str=="float")
    {
        float* floatVal = static_cast<float *>(value.ptr);
        std::cout<<"Float: "<<*floatVal<<std::endl;
    }
}
