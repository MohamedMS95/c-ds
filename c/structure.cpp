
#include <iostream>

struct  Rectangle
{
    /* data */
    int length;
    int breadth;
} ;
// r1,r2,r3;

// struct Rectangle r;
   

int main(){
    struct Rectangle r1={10,5};

    printf("%lu\n",sizeof(r1));
    
    printf("Hello");
    return 0;
}