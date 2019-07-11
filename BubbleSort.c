#include<stdio.h>

int main(){

    int i,temp;
    int array[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};

    while(1){

        int flag=0;
        for(i=0; i<15; i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for(i=0; i<15; i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
