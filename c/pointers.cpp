
#include <iostream>

#include <stdio.h>
using namespace std;
int main(){
    // int A[5]={1,2,3,4,5};
    // int *p;
    // p=A;o
    //create in heap

    int *p;
    // in c using malloc
    // p=(int *)malloc(5*sizeof(int));

    // in c++
    p=new int[5];

    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    for(int i=0;i<5;i++){
        std::cout << p[i] << endl;
    }
    // delete [] p;
    free(p);
    return 0;
}