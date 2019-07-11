#include<stdio.h>

int main(){
    int n, start, end, array[15] = {2,3,4,5,15,19,26,27,36,38,44,46,47,48,50}, mid;
    start = 0;
    end = 14;
    printf("Search: ");
    scanf("%d", &n);
    while(start<=end){
        mid = (start+end)/2;
        if(array[mid] == n)
        {
            printf("Found\n");
            printf("%dth Index",mid);
            break;
        }
        else if(n < array[mid])
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(start>end) printf("Not Found\n");
    return 0;
}
