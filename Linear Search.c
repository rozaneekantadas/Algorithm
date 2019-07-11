#include<stdio.h>

int main(){
    int i,n,arry[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    printf("Search: ");
    scanf("%d", &n);
    for(i=0; i<15; i++){
        if(arry[i]==n)
        {
            printf("Found\n");
            printf("%dth Index\n",i);
            break;
        }
    }
    if(i>=15)
    printf("Not Found\n");
    return 0;
}
