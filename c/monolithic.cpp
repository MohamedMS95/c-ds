#include <iostream>

using namespace std;

int main(){
    int length=0,breadth=0;
    printf("Enter Length and Breadth");
    cin >> length >> breadth;

    int area= length * breadth;
    int perimeter=2*(length+breadth);
    printf("Area is: %d\nPerimeter is: %d\n",area,perimeter);
}