#include<stdio.h>

int main(){
    int coins[4] = {7,2,4,6}, i, j, total = 13;
    int T[total+1], R[total+1];
    T[0] = 0;
    R[0] = -1;
    for(i=1; i<=total; i++){
        T[i] = 100;
        R[i] = -1;
    }

    for(j=0; j<4; j++){
        for(i=0; i<=total; i++){
            if(i >= coins[j]){
                if(T[i] >= T[i-coins[j]]+1){
                    T[i] = T[i-coins[j]]+1;
                    R[i] = j;
                }
            }
        }
    }

    int mincoin = T[total];
    printf("Total Taka: %d\n", total);
    printf("Minimum Coins Need: %d\n", mincoin);
    printf("They are:\n");
    int index = total;
    for(i=0; i<mincoin; i++){
        printf("%d\n", coins[R[index]]);
        index = index - coins[R[index]];
    }
    return 0;
}
