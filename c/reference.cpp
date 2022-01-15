
#include <iostream>

using namespace std;

int main(){
    int a=10;
    // reference variable syntax &variablename;
    int &r=a;

    cout << a << endl;
    cout << r << endl;
    //doing operation on ref vairable
    r++;

    cout << a << endl;
    cout << r << endl;

}