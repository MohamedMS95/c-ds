#include <stdio.h>

int main(){

    int A[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%p \n",&A[i]);
    }
    
    return 0;
}