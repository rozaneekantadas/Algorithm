#include<stdio.h>

int main(){
    int coins[7] = {1,2,5,10,20,50,100}, amount, i;
    int change[7], count=0;
    scanf("%d", &amount);

    for(i=6; i>=0; i--){
        change[i] = amount / coins[i];
        amount = amount % coins[i];
        if(change[i]>0) count++;
    }

    printf("Minimum Coins needs: %d\n\n", count);

    for(i=6; i>=0; i--){
        printf("%d coins of %d notes\n", change[i], coins[i]);
    }
    return 0;
}
