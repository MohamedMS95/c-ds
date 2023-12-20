#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void logArray(int A[], int n)
{
    printf("Printing Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Bubble(int A[], int n)
{
    printf("BubbleSort\n");
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        /* code */
        for (j = 0; j < n - i - 1; j++)
        {
            /* code */
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void InsertionSort(int A[], int n)
{
    printf("InsertionSort\n");
    int x, j;
    // 3 4 2 6 7
    // 0 1 2 3 4
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        //shifting
        while (A[j] > x && j > -1)
        {
            /* code */

            A[j + 1] = A[j];
            j--;
        }
        // inserting
        A[j + 1] = x;
    }
}

void myCodeSchoolInsertionSort(int A[], int n)
{
    int hole, value;
    for (int i = 1; i < n; i++)
    {
        /* code */
        hole = i;
        value = A[hole];
        while (hole > 0 && A[hole - 1] > value)
        {
            /* code */
            A[hole] = A[hole - 1];
            hole = hole - 1;
        }
        A[hole] = value;
    }
}

void myCodeSchoolReverseInsertionSort(int A[], int n)
{
    int hole, value;
    for (int i = n - 2; i >= 0; i--)
    {
        /* code */
        hole = i;
        value = A[hole];
        // printf("hole %d , value %d\n",hole,value);
        while (hole <= n - 2 && A[hole + 1] < value)
        {
            /* code */
            // printf("shifting\n");
            // printf("hole %d\n",hole);
            A[hole] = A[hole + 1];
            hole = hole + 1;
        }
        // printf("Before applying value x final hole %d ,A[hole] is %d, value is %d\n",hole,A[hole],value);
        logArray(A, n);
        A[hole] = value;
        printf("--");
        // logArray(A,n);
    }
}

void SelectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        /* code */
        for (j = k = i; j < n; j++)
        {
            /* code */
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}

int PartitionForQuickSort(int A[], int l, int h)
{
    printf("PartitionFinding\n");
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        /* code */
        do
        {
            /* code */
            i++;
        } while (A[i] <= pivot);

        do
        {
            /* code */
            j++;
        } while (A[j] > pivot);

        if (i < j)
        {
            /* code */
            swap(&A[i], &A[j]);
        }

    } while (i < j);
    swap(&A[l], &A[j]);
    printf("Partition value j %d\n", j);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    printf("QuickSort\n");
    int j = 0;
    if (l < h)
    {
        j = PartitionForQuickSort(A, l, h);
        printf("Partition %d \n", j);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h)
    {
        /* code */
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }
    for (; i <= mid; i++)
    {
        /* code */
        B[k++] = A[i];
    }
    for (; j <= h; j++)
    {
        /* code */
        B[k++] = A[j];
    }

    for (i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

void IMergeSort(int A[], int n)
{
    int p, l, mid, h, i;
    for (p = 2; p <= n; p = p * 2)
    {
        /* code */
        for (i = 0; i + p - 1 <=n; i = i + p)
        {
            /* code */
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if ((p / 2) < n)
    {
        Merge(A, 0, (p / 2)-1, n - 1);
    }
}

void RecursiveMergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        RecursiveMergeSort(A,l,mid);
        RecursiveMergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

int findMax(int A[],int n){
    int max=-1;
    int i;
    for ( i = 0; i < n; i++)
    {
        /* code */
        if (A[i]>max)
        {
            /* code */
            max=A[i];
        }
        
    }
    return max;
    
}

void CountSort(int A[],int n){

    printf("CountSort\n");
    int i,j,max,*C;
    max=findMax(A,n);
    C=(int *)malloc(sizeof(int)*(max+1));
    for ( i = 0; i < max+1; i++)
    {
        /* code */
        C[i]=0;
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
        C[A[i]]++;
    }
    i=0;j=0;
    while (j< max+1)
    {
        /* code */
        if (C[j]>0)
        {
            /* code */
            A[i++]=j;
            C[j]--;
        }else
        {
            /* code */
            j++;
        }
        
        
    }
    
    
    
}

struct BinNode
{
    /* data */
    int value;
    BinNode *node;
};


void BinSort(int A[],int n){
    printf("BinSort\n");
    int max,i,j;
    max=findMax(A,n);
    //bins array declarations
    BinNode bins[max+1];
    //bins array init
    // BinNode bins[max+1]=(BinNode *)malloc((max+1)*sizeof(BinNode));

    //initializing null for all
    for ( i = 0; i < max+1; i++)
    {
        /* code */
        bins[i]=NULL;
    }
    for ( i = 0; i < max+1; i++)
    {
        /* code */
        printf("%s\n ",bins[i]);
    }
    
    
    
}

void RadixSort(int A[],int n){

}

void ShellSort(int A[],int n){
    printf("ShellSort\n");
    int gap,i,j,temp;
    for ( gap = n/2; gap>=1;gap=gap/2)
    {
        /* gap iteration n=8 gap= 4 2 1 ...*/
        for(i=gap;i<n;i++){
            
            temp=A[i];
            // 0 index
            j=i-gap;

            while (j>=0 && A[j]>temp)
            {
                /* code */
                A[j+gap]=A[j];
                j=j-gap;

            }
            A[j+gap]=temp;

        }
    }
    
}

void myCodeSchoolShellSort(int A[],int n){
    // first take gap
    int gap,i,hole,value;
    // gap = /2 => n/2 n/4 ..1
    for (gap = n/2; gap>=1; gap=gap/2)
    {
        /* for each gap do shell sort only gap index values */
        for ( i = gap; i < n; i++)
        {
            /* insertion sort here on the gap shell only*/
            //taking element into the var on the index point
            value=A[i];
            // putting hole on the first element if there is gap element before index
            hole = i- gap;
            
            while (hole >=0 && A[hole] > value)
            {
                /* code */
                A[hole+gap]=A[hole];
                hole=hole -gap;
            }
            A[hole+gap]=value;
            
        }
        
    }
    
}



int main()
{
    printf("Sorting\n");
    int A[] = {1, 3, 4, 5, 6, 55, 8, 9, 10, 2}, n = 10;
    logArray(A, n);
    // QuickSort(A,0,n-1);
    // IMergeSort(A, n);
    // RecursiveMergeSort(A,0,n-1);
    // CountSort(A,n);
    BinSort(A,n);
    // ShellSort(A,n);
    // myCodeSchoolShellSort(A,n);
    logArray(A, n);
    return 0;
}
