#include <string>

class StringAndPointer
{
public:
    StringAndPointer(void* ptr, std::string str)
    {
        this->ptr=ptr;
        this->str=str;
    }
    void* ptr;
    std::string str;
};
