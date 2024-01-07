// Pointers are address variable used to store the address of the variable

#include <stdio.h>
//c++
#include <stdlib.h>
#include<iostream>

// malloc will create mem in heap in c
int main(){
    // declaring variable
    int a=10;
    // declaring pointer
    int *p;
    //initializing pointer
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    // printf("%s\n",&a);

    int *p1;
    //c
    p1=(int *)malloc(5*sizeof(int *));
    //c++
    p1=new int[5];
    delete []p1;
    free(p1);
    return 0;
}