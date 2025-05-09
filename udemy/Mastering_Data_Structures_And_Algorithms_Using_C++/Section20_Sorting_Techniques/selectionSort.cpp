#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int A[], int n)
{
  int i,j,k;

  for(i=0;i<n-1;i++)
  {
    for(j=k=i;j<n;j++)
    {
      if(A[j]<A[k])
        k=j;
    }
    swap(&A[i],&A[k]);
  }
}

int main()
{
  int A[] = {11,13,7,2,6,9,4,5,10,3},n=10,i;


  selectionSort(A,n);

  for(i=0;i<10;i++)
    printf("%d ", A[i]);
  printf("\n");

  return 0;
}
