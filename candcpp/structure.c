#include<stdio.h>

int main() {
    // consumes the sum of all declared variables space for a given struct
    struct Rectangle
    {
        int length;
        int breadth;
    };
    
    //declaration
    struct Rectangle r;
    // declaration & initialization
    struct Rectangle r1={10,5};
    r.length=10;
    r.breadth=5;
    printf("Area of Rectangle %d\n",r.length * r.breadth);

    // definition for rummy card based on color,shape,face
    struct Card
    {
        int face;
        int shape;
        int color;
    };
    // array of structure
    struct Card deck[52];
    return 0;
}