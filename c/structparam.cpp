
#include <iostream>

using namespace std;

struct  Rectangle
{
    /* data */
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
}

struct Rectangle * fun(){
    struct Rectangle *p;
    //c
    // p=(struct Rectangle)malloc(sizeof(struct Rectangle));
    p=new Rectangle;

    p->length=10;
    p->breadth=15;
    return p;

}

int main(){
    // struct Rectangle r={10,20};
    // fun(&r);
    // cout << r.length << endl;

    struct Rectangle *ptr=fun();

    
    return 0;

}