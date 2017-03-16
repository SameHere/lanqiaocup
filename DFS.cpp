#include<iostream>
using namespace std;
int mark[4][4]={0};
int M[4][4]={

};
void dfs(int x,int y) {
    if(x<0&&y<0) return;
    if(x>3&&y>3) return;
    cout<<M[x][y]<<endl;
    mark[x][y]=1;
    for(int i=-1;i<=1;i++)
        for(int j=-1;j<=1;j++)
            if(mark[x+i][y+j]==0) dfs(x+i,y+j);
}

int main() {
    int n=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            M[i][j]=++n;
    dfs(0,0);
    return 0;
}
