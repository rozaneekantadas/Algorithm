#include<stdio.h>

int main(){

    int howMany,i,temp;
    printf("Enter How Many Number Would You Want to Sort: ");
    scanf("%d", &howMany);
    int array[howMany];
    for(i=0; i<howMany; i++){
        scanf("%d",&array[i]);
    }

    while(1){

        int flag=0;
        for(i=0; i<howMany-1; i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    printf("\n======Sorted Array(Ascending Order:)======\n");
    for(i=0; i<howMany; i++){
        printf("%d\n",array[i]);
    }

    printf("\n======Sorted Array(Descending Order:)=====\n");
    for(i=howMany-1; i>=0; i--){
        printf("%d\n",array[i]);
    }

    return 0;
}
