#include <stack>

template<class T>
class myStack
{
public:
    void push(T value)
    {
        st.push(value);
    }
    
    void pop()
    {
        st.pop();
    }
    
    unsigned size()
    {
        return st.size();
    }
    
protected:
    std::stack<T> st;
};
