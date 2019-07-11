#include<stdio.h>

void Merge(int A[], int L[], int nL, int R[], int nR){
    int i=0, j=0, k=0;
    while(i<nL && j<nR){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < nL){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j < nR){
        A[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int n){
    int i,mid;
    if(n<2) return;
    mid = n/2;
    int L[mid], R[n-mid];

    for(i=0; i<mid; i++){
        L[i] = A[i];
    }

    for(i=mid; i<n; i++){
        R[i-mid] = A[i];
    }
    MergeSort(L,mid);
    MergeSort(R,n-mid);
    Merge(A,L,mid,R,n-mid);
}



int main(){
    int array[9] = {2,4,6,7,9,11,1,3,5},i;

    MergeSort(array, 9);

    for(i=0; i<9; i++){
        printf("%d\n", array[i]);
    }
    return 0;

}
