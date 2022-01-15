
#include <iostream>

using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};


int main(){
    int n;
    int *p1;
    char *p2;
    float *p3;
    // double *p4;
    // struct Rectangle *p5;

    // it allocates largest memory to all varible even though respective pointer occupies less memory like 4,1,4,8,8
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    // cout<<sizeof(p4)<<endl;
    // cout<<sizeof(p5)<<endl;
    cout<<sizeof(n)<<endl;


}