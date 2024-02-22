// call itself recrusively and return the values

// Generalizsing recursion
// calling(Ascending) time exec before fn and returning(Descending) time after fn
// Loop only has Ascending phase and Recursion has both Ascending and Descending phase
// 

// n+1 calls in stack ,you can see in tracing tree

// so O(n)
// why not n+1,we are just taking highest degree

// Time Complexity

// void fun1(int n){
//     if(n>0){
//         printf("%d",n);
//         fun1(n-1);
//     }
// }

// tracing tree for fun1

//                      fun1(3)
//                      /   \
//                     3    fun1(2)
//                          /   \
//                         2    fun1(1)
//                              /   \
//                              1   fun1(0)
//                                     /
//                                    X

// void fun2(int n){
//     if(n>0){
//         fun2(n-1);
//         printf("%d",n);
//     }
// }


// int main(){
//     int x=3;
//     fun1(x);
// }

#include <stdio.h>

void tailfun(int n){
    if(n>0){
        printf("%d ",n);
        tailfun(n-1);
    }
}

// static variables in recursion
int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

// Types of Recursion

// Tail Recursion
// Head Recursion
// Tree Recursion
// Indirect Recursion
// Nested Recursion

// Tail Recursion

// calls itself and the call is the last statement
// at return time,it doesnt have to do any ops
// eg. tailfun()

// Comparision with loop
// Tail recursion can be easily converted into loops
// In case of tail recursion,loop is efficient i.e loop time complexity O(n) but space O(1)

// Head Recursion
// eg fun2()
// doesnt do anything at calling time and does at returning time

// Comparision with loop

// have to do change according with context for loop conversion
// 

// Linear recursion
// if recursive call is occured only one,then it is linear recursion

// Tree Recursion
// if recursive call is occured more than once,it is tree recrusion

//eg

// void fun(int n){
//     if(n>0){
//         printf("%d ",n);
//         fun(n-1);
//         fun(n-1);
//     }
// }

// Tracing for the above eg

//                                  fun(3)
//                                  /  |           \ 
//                                 /   |            \
//                                /    |             \
//                               3   fun(2)            fun(2) this goes same like other one
//                                 /   |      \              \    
//                                /    |        \              \
//                              2   fun(1)              fun(1)
//                                  / |  \               / |  \
//                                 /  |   \             /  |   \
//                               1  fun(0) fun(0)     1   fun(0) fun(0)
//                                     |      |           |      |
//                                     X      X            X      X
// o/p 3 2 1 1 2 1 1
// total 15 calls
// n=3
//calls => 1 + 2 + 4 + 8 = 15
// 2^0 + 2^1 + 2^2 + 2^3 + 2^4 - 1
// 2^0 + 2^1 + 2^2 + 2^3 + ....+ 2^n= [2^(n+1)]-1
// Time COmplexity -> O(2^n) -> depends on no.of calls
// Space Complexity -> depends on no of stack -> height of the tree n+1 is the space
// i.e O(n)



void fun2(int n){
    if(n>0){
        fun2(n-1);
        printf("%d",n);
    }
}
// tree recursion
void treeFun(int n){
    if(n>0){
        printf("%d ",n);
        treeFun(n-1);
        treeFun(n-1);
    }
}

// Indirect Recursion
// If a fn calls other fn,other fn calls another one,then that another fn calling the first fn,
// this is known as Indirect Recursion

//          A--> B
//          |    |
//          |___ C
// forms a cycle

void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d ",n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        printf("%d ",n);
        funA(n/2);
    }
}

// Nested Recursion

// fn call takes again fn call as param
int nestedFun(int n){
    if(n>100){
        return n-10;
    }
    return nestedFun(nestedFun(n+11));
}

// Sum of first n natural numbers

// 1 + 2 + 3 + ....+ n
// sum(n)=1 + 2 + 3 + ....(n-1)+ n
// sum(n)=sum(n-1)+n

// sum(n) = 0              n=0
//          sum(n-1)+n     n>0

// int sum(int n){
//     if(n==0){
//         return 0;
//     }else{
//         return sum(n-1)+n;
//     }
// }

// math formula n*(n+1)/2

// Factorial of a number

// n! = 1 * 2 * 3* ... * n
// fact(n) =  1 * 2 * 3* ... (n-1)* n
// fact(n)=fact(n-1)*n

// fact(n)
//  1   n=0
//fact(n-1)*n   n>0

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}

// Exponent m^n

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    return pow(m,n-1)*m;
}

int reducedPow(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return reducedPow(m*m,n/2);
    }else{
        return m*reducedPow(m*m,(n-1)/2);
    }

}


int main(){
    int x=5;
    // tailfun(x);
    // int y=fun(x);
    // printf("%d",y);
    // int treeInput=3;
    // treeFun(treeInput);
    // funA(10);
    // int r;
    // r=nestedFun(30);
    // printf("%d ",r);
    // int fac=fact(5);
    // printf("%d ",fac);
    printf("%d ",reducedPow(2,9));
    return 0;
}

