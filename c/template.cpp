
#include <iostream>

using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    Arithmetic(){
        this->a=this->b=0
    }
};

int main()
{
    return 0;
}