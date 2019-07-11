#include<stdio.h>
void quickSort(int arr[], int start, int end);
int partition(int arr[], int start, int end);
void swap(int arr[], int a, int b);

void quickSort(int arr[], int start, int end){

    if(start < end){
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int partition(int arr[], int start, int end){
    int pivot,pIndex,i;
    pivot = arr[end];
    pIndex = start;
    for(i=start; i<end; i++){
        if(arr[i] <= pivot){
            swap(arr, i, pIndex);
            pIndex++;
        }
    }
    swap(arr, pIndex, end);
    return pIndex;
}

void swap(int arr[], int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(){
    int array[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48},i;

    quickSort(array, 0, 14);

    for(i=0; i<15; i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
