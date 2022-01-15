
#include <iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = breadth = 1;
    }
    Rectangle(int a, int b);
    //facilitators
    int area();
    int perimeter();
    //accessors setter and getter
    int getLength()
    {
        return length;
    }
    void setLength(int l)
    {
        length = l;
    }
    // destructors
    ~Rectangle();
};

//implementations
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
}

int main()
{
    Rectangle r(10, 20);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setLength(20);
}