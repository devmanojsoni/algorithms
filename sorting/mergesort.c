//Merge Sort
#include <stdio.h>
#include <stdlib.h>

// function to swap two no.s by their addresses (call by reference)
void swap(int *x,int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
 }
void Merge(int A[],int l,int mid,int h) { // takes arguments -Array, low, mid and high
    int i=l,j=mid+1,k=l; // init i to low, j to mid+1 and k to l
    int B[100]; // auxillary array with size of 100, you can also take B[h+1]
    // which will be equal to the size of A[]  

    while(i<=mid && j<=h) {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        B[k++]=A[j++];
    }
    for(;i<=mid;i++)
    B[k++]=A[i];
    for(;j<=h;j++)
    B[k++]=A[j];

    for(i=l;i<=h;i++)
    A[i]=B[i];
}
void IMergeSort(int A[],int n) {
 int p,l,h,mid,i;

    for(p=2;p<=n;p=p*2) {
        for(i=0;i+p-1<=n;i=i+p) {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
 if(p/2<n)
 Merge(A,0,p/2-1,n);

}
int main() {
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

 IMergeSort(A,n);

 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");

 return 0;
}