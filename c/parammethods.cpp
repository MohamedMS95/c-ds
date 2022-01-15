
#include <iostream>

using namespace std;

//formal params
//call by value
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// call by address
void swap(int *a, int *b)
{
    int temp;
    //dereference
    temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference
// internally it becomes monolithic ,converts m/c code into main program
//prefer not to use
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before swapping " << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    // pass by value
    // actual params

    swap(a,b);

    //pass by address
    // swap(&a, &b);

    // pass by reference
    //only supported in c++

    cout << "After swapping" << endl;

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
}