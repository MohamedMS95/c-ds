#include <stdio.h>
#include <stdlib.h>
// size -> capacity of the array
// length -> no. of actual elements in the array
struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are \n");
    for (i = 0; i < arr.length; i++)
    {
        /* code */
        printf("%d", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void Insert(struct Array *arr,int index,int x){
    if(arr->length < arr->size){
        //shifting
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    struct Array arr;
    int n, i;
    printf("Enter size of an array");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all elements\n");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    // Operations
    Display(arr);
    Append(&arr, 4);
    Insert(&arr,2,8);
    Display(arr);
    return 0;
}