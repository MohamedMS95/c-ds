#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // direct initialization
    int B[5]={0,1,2,3,4};
    int n;
    cout<<"Enter size:";
    cin>>n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    cout<<"Inputs are given successfully"<<endl;

    cout<<"Printing the numbers"
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    }
    
    return 0;
}