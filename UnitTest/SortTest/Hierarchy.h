#include <iostream>
#include <algorithm>
#include <vector>

//Funcion para comparar valores
template <class T>
bool comparacion (T i,T j) { return (i<j); }

//Funcion para imprimir vector
template <class T>
void printVector(std::vector<T> data)
{
    std::cout << "Vector ordenado:";
    for (std::vector<int>::iterator it=data.begin(); it!=data.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
}

//SORTS//
template <class T>
class Sort
{
public:
    virtual void sort(std::vector<T>* data) = 0;
};

//BUBBLE SORT//
template <class T>
class BubbleSort : public Sort<T>
{
public:
    void sort(std::vector<T>* data)
    {
        for(int i=0;i<data->size()-1;i++)
        {
            for(int j=0;j<data->size() - i - 1;j++)
            {
                if (data->at(j) > data->at(j+1))
                {
                    int temp = data->at(j);
                    data->at(j) = data->at(j+1);
                    data->at(j+1) = temp;
                }
            }
        }
    }
};

//INSERT SORT//
template <class T>
class InsertionSort : public Sort<T>
{
public:
    void sort(std::vector<T>* data)
    {
        for (int i = 1; i < data->size(); i++)
        {
            int key = data->at(i);
            int j = i-1;

            while (j >= 0 && data->at(j) > key)
            {
                data->at(j+1) = data->at(j);
                j = j-1;
            }
            data->at(j+1) = key;
        }  
    }
};

//STL SORT//
template <class T>
class stlSort : public Sort<T>
{
public:
    void sort(std::vector<T>* data)
    {
        std::sort (data->begin(), data->end(), comparacion<T>);
    }
};
