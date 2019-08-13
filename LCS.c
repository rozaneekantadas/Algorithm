#include<stdio.h>

void lcs();
void print();
//c 2D Array for matrix representation
int c[20][20], m, n;
//str1 for String 1
//str2 for String 2
//b 2D Char Array for backtracking
char str1[20], str2[20], b[20][20];

void lcs(){
    int i,j;
    // m = length of String 1
    // n = length of String 2
    m = strlen(str1);
    n = strlen(str2);

    //Initialize 0 in 1st column
    for(i=0; i<=m; i++){
        c[i][0] = 0;
    }
    //Initialize 0 in 1st row
    for(i=0; i<=n; i++){
        c[0][i] = 0;
    }

    // c = cross, u=upward, l=left
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(str1[i-1] == str2[j-1]){
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 'c';
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 'u';
            }
            else{
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }
}

//Backtracking
void print(int i, int j){

    if(i==0 || j==0) return;

    if(b[i][j] == 'c'){
        print(i-1,j-1);
        printf("%c",str1[i-1]);
    }
    else if(b[i][j] == 'u'){
        print(i-1,j);
    }
    else{
        print(i,j-1);
    }
}



int main(){
    printf("1st Sequence: ");
    gets(str1);
    printf("2nd Sequence: ");
    gets(str2);

    lcs();
    printf("LCS: ");
    print(m,n);

    return 0;
}

