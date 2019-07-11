#include<stdio.h>

int main(){
    int i,a[6] = {9,8,3,2,1,10};
    int j,key;
    for(i=1; i<6; i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(i=0; i<6; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
