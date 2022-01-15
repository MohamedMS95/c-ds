
#include <iostream>

using namespace std;

// array points to memory addr
//some compiler wont allow [] symbol prefer * to return pointer
/*
ha
*/
int *fun(int n)
{
    int *P;
    P = (int *)malloc(n * sizeof(int));
    return P;
}

void siz(int *A)
{
    //A is a array pointer ,passed here
    cout << "Size of " << sizeof(A) << endl;
    for (int index=0;index<5;index++)
        cout << A[index] << endl;
}

int main()
{
    int *A;
    A = fun(5);

    int B[] = {1, 2, 3, 4, 5};
    siz(B);
    cout << sizeof(B) << endl;
}