
#include <stdio.h>

void fun1(int n){
     if(n>0){
         printf("%d\n",n);
         fun1(n-1);
     }
}

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}
// 0 -> 0 
//1 -> 0+1 
//2 ->  0+1+2
//3 -> 0+1+2+3
//4 -> 0+1+2+3+4
//5 -> 0+1+2+3+4+5

//---
// 0 -> 0=0
// 1 -> 0+1=1
// 2 -> 1+2=3
//3 -> 3+3=6
//4 -> 6+4=10
//5 -> 10+5=15


int staticfun(int n){
    static int x=0;
    if(n>0){
        x++;
        return staticfun(n-1)+x;
    }
    return 0;
}
// 5 4 3 2 1 0 so x is 5
// 0 -> 0
//1 -> 0+5=5
//2 -> 5+5=10
//3 -> 10+5=15
//4 -> 15+5=20
//5 -> 20+5=25

int main(){
    // int x=3;
    // fun1(x);
    int y=5;
    // int ans=fun(y);
    int ans=staticfun(y);
    printf("ans is : %d ",ans);
    return 0;
}