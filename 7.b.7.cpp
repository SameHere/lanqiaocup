/*
剪邮票

如【图1.jpg】, 有12张连在一起的12生肖的邮票。
现在你要从中剪下5张来，要求必须是连着的。
（仅仅连接一个角不算相连）
比如，【图2.jpg】，【图3.jpg】中，粉红色所示部分就是合格的剪取。

请你计算，一共有多少种不同的剪取方法。

请填写表示方案数目的整数。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字。
*/
#include<iostream>
using namespace std;
int m[3][4]={0};
int mnum[13]={0};
int c=1;
int num[6]={0};
int mark[3][4]={0};
int all=0;
int n=0;

void crate() {
    int x,y;
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            if(m[i][j]==1) m[i][j]=0;
        }
    }
    for(int i=1;i<6;i++) {
        y=num[i]%4;
        x=num[i]/4;
        m[x][y-1]=1;
    }
}
void dfs(int x,int y) {
    if(all==5) {n++;return;}
    if(x>2||y>3) return;
    if(x<0||y<0) return;
    mark[x][y]=1;
    for(int i=-1;i<=1;i++)
        for(int j=-1;j<=1;j++) {
            if(abs(i)+abs(j)==1) {
                if(m[x+i][y+j]==1) {
                    all++;
                    dfs(x+i,y+j);
                }
            }
        }
    mark[x][y]=0;
}
void judge() {
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            if(m[i][j]==1){
                dfs(i,j);
                return ;
            }

}


void dfscrate(int n) {
    if(c==6){
        crate();
        judge();
        return;
    }
    for(int i=1;i<13;i++) {
        if(mnum[i]==0&&i>num[c-1]) {
            mnum[i]=1;
            num[c]=i;
            dfscrate(++c);
            mnum[i]=0;
            c--;
        }
    }
}

int main() {
    dfscrate(0);
    cout<<n<<endl;
    return 0;
}//juage函数有问题