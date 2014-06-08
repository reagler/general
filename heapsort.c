//
//  heapsort.c
//  heap
//
//  Created by reagler on 8/1/12.
//

#include <stdio.h>

#define LeftChild(i) (2 * (i) + 1) //堆从0开始而不是从1开始
typedef int ElementType;

void Swap(ElementType *a, ElementType *b)
{
    ElementType Tmp;
    Tmp = *a;
    *a = *b;
    *b = Tmp;
}

void PercDown(ElementType A[], int i, int N)
{
    int Child;
    ElementType Tmp;
    
    for (Tmp = A[i]; LeftChild(i) < N;  i = Child) {
        Child = LeftChild(i);
        if (Child != N - 1 && A[Child + 1] > A[Child]) {
            Child++;
        }
        if (Tmp < A[Child]) {
            A[i] = A[Child];
        }
        else
            break;
    }
    A[i] = Tmp;
}


void HeapSort(ElementType A[], int N)
{
    int i;
    
    for (i = N / 2; i >= 0; i--) {  /*build heap*/
        PercDown(A, i, N);
    }
    
    for (i = N - 1; i > 0; i--) {
        Swap(&A[0], &A[i]);      /*delete max*/
        PercDown(A, 0, i);
    }
}

int main()
{
    int A[] = {3,2,5,7,0,12,6,34,1,4,6,0,21};
    HeapSort(A, 13);
    for (int i = 0; i < 13; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
