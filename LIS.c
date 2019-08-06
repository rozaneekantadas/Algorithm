#include<stdio.h>

int main(){
    int a,i,t;

    printf("Number of Elements: ");

    scanf("%d", &t);
    int array[t+1], LIS[t+1], preI[t+1];

    for(i=0; i<t; i++){
        scanf("%d", &array[i]);
        LIS[i] = 1;
        preI[i] = -1;
    }

    for(i=1; i<t; i++){
        int j =0;
        while(j<i){
            if(array[i]>array[j] && LIS[i]<LIS[j]+1){
                LIS[i] = LIS[j] + 1;
                preI[i] = j;
                a=i;
            }
            j++;
        }
    }
    int n = LIS[0];

    for(i=1; i<t; i++){
        if(n<LIS[i]){
            n = LIS[i];
        }
    }
    printf("\nLongest Increasing Sequence: ");
    printf("%d\n", n);
    printf("Sequence: ");

    int ara[n];
    ara[0]=array[a];

    int index=1;
    while(preI[a] != -1)
    {
        int pre_value=preI[a];
        ara[index]=array[pre_value];
        index++;
        a= pre_value;
    }
    for(i=n-1; i>=0; i--)
        printf("%d ", ara[i]);

        printf("\n");
    return 0;

}
