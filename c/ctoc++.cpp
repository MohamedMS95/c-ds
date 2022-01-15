
#include <iostream>

using namespace std;

// c style
struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *p, int l)
{
    p->length = l;
}

//c++ style

class Rectangle1{
private:
    /* data */
    int length;
    int breadth;
public:
    Rectangle1(int l,int b){
        length=l;
        breadth=b;
    }
    // ~Rectangle1();

    int area(){
        return length*breadth;
    }

    void changeLength(int l){
        length=l;
    }
};


int main()
{
    // cstyle
    // struct Rectangle r;
    // initialize(&r, 5, 10);
    // area(r);
    // changeLength(&r, 10);

    //c++ style
    Rectangle1 r(10,5);
    r.area();
    r.changeLength(20);
    return 0;

}