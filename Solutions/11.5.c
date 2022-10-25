#include <stdio.h>

/*
void spiralarray(int n, int arr[n][n]) {
    int k = 1, i = 0, j = 0, ci, cj;
    while (k <= n * n) {
        if (k == n * n) {
            arr[i][j] = n * n;
            break;
        }
        for (ci = i; ci < n - i - 1; ci++) {
            arr[ci][j] = k++;
        }
        for (cj = j; cj < n - j - 1; cj++) {
            arr[ci][cj] = k++;
        }
        for (ci = ci; ci > i; ci--) {
            arr[ci][cj] = k++;
        }
        for (cj = cj; cj > j; cj--) {
            arr[ci][cj] = k++;
        }
        i++; j++;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N][N];
    spiralarray(N, arr);
    for (int l = 0; l < N; l++) {
        for (int m = 0; m < N; m++) {
            printf("%d ", arr[l][m]);
        }
        if (l < N - 1) {
            printf("\n");
        }
    }
}
*/

/*int main(){
    int n,x,y;
    int arr[101][101];
    scanf("%d",&n);
    int k=1;
    int i=0,j=0;
    int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}}; // 아래, 오른쪽, 위, 왼쪽
    int diretion=0;
    while(k<=n*n){
        arr[i][j]=k;
        x=i+dir[diretion][0];
        y=j+dir[diretion][1];
        if (x<0||y<0||x>=n||y>=n||arr[x][y]!=0){ // y<0 제외해도 가능
            diretion=(diretion+1)%4;
        }
        i+=dir[diretion][0];
        j+=dir[diretion][1];
        k++;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}*/

int main(){
    int n,m,x,y;
    int arr[101][101];
    scanf("%d %d",&n, &m);
    int k=1;
    int i=0,j=0;
    int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}}; // 아래, 오른쪽, 위, 왼쪽
    int diretion=0;
    while(k<=n*m){
        arr[i][j]=k;
        x=i+dir[diretion][0];
        y=j+dir[diretion][1];
        if (x<0||y<0||x>=n||y>=m||arr[x][y]!=0){ // y<0 제외해도 가능
            diretion=(diretion+1)%4;
        }
        i+=dir[diretion][0];
        j+=dir[diretion][1];
        k++;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}