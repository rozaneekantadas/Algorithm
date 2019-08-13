#include <stdio.h>

int main(){
	int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;

	printf("Enter the no of vertices: ");
	scanf("%d",&n);

	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=1;i<=n;i++){
        indeg[i]=0;
        flag[i]=0;
    }

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            indeg[i]=indeg[i]+a[j][i];

    printf("\nThe topological order is: ");

    while(count<n){
        for(k=1;k<=n;k++){
            if((indeg[k]==0) && (flag[k]==0)){
                printf("%d ",k);
                flag [k]=1;
            }

            for(i=1;i<=n;i++){
                if(a[i][k]==1)
                    indeg[k]--;
            }
        }

        count++;
    }

    return 0;
}
