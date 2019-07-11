#include<stdio.h>

void insertionSort(int arr[], int n){
    int i, hole, value;
    for(i=1; i<=n; i++){
        value = arr[i];
        hole = i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }
        arr[hole] = value;
    }
}

int main(){
    int i, array[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};

    insertionSort(array, 14);

    for(i=0; i<15; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
