
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(){

    //for c struct is necessary for variable
    // struct Rectangle r;
    // in c for allocate memory in heap

    // struct Rectangle *p;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    // for c++ struct is not needed for vairbel declaration
    Rectangle r={10,5};
    // struct Rectangle *p;
    // p=new Rectangle;

    cout << r.length << endl;
    cout << r.breadth << endl;

    Rectangle *p=&r;

    cout << p->length <<endl;
    cout<< p->breadth <<endl;



    return 0;
}