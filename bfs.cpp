#include<stdio.h>
#include<queue>

using namespace std;

int graph[100][100], color[100], d[100];
int const White = 0;
int const Grey = 1;
int const Black = 2;

int main(){
    int i,j,v,src,n,dest;
    scanf("%d", &v);
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
            scanf("%d", &n);
            graph[i][j] = n;
        }
    }
    printf("Enter Source: ");
    scanf("%d", &src);
    printf("\nEnter Destination: ");
    scanf("%d", &dest);
    queue<int> q;
    q.push(src);

    do{
        int u = q.front();
        q.pop();
        printf("%d ", u);
        for(i=1; i<=v; i++){
            if((graph[u][i]==1) && (color[i]==White)){
                q.push(i);
                color[i] = Grey;
                d[i] = d[u] +1;
            }
        }
        color[u] = Black;
    } while(!q.empty());

    printf("\n%d ", d[dest]);

    return 0;
}
