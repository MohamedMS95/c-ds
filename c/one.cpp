#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter size:" <<endl;
    cin >> n;
    int A[n]={1,2,3,4};
    A[0]=12;
    A[1]=13;
    A[2]=14;


    cout << "Hello" << endl;
    cout << A << endl;
    printf("%d\n",A[0]);
    cout <<sizeof(A)<< endl;
    cout << "printing All" << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     cout << A[i] << endl;
    // }
    
    for (int x:A)
    {
        /* code */
        cout << x << endl;

    }
    
    
    return 0;
}
