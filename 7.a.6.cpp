/*
寒假作业

现在小学的数学题目也不是那么好玩的。
看看这个寒假作业：

   □ + □ = □
   □ - □ = □
   □ × □ = □
   □ ÷ □ = □

   (如果显示不出来，可以参见【图1.jpg】)

每个方块代表1~13中的某一个数字，但不能重复。
比如：
 6  + 7 = 13
 9  - 8 = 1
 3  * 4 = 12
 10 / 2 = 5

以及：
 7  + 6 = 13
 9  - 8 = 1
 3  * 4 = 12
 10 / 2 = 5

就算两种解法。（加法，乘法交换律后算不同的方案）

你一共找到了多少种方案？


请填写表示方案数目的整数。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字。

*/
#include<iostream>
using namespace std;
int num[12]={0};
int mark[14]={0};
int all=0;
void dfs(int n) {
    if(n==3) {
        if(num[0]+num[1]!=num[2])
            return;
    } else if(n==6) {
        if(num[3]-num[4]!=num[5])
            return;
    } else if(n==9) {
        if(num[6]*num[7]!=num[8])
            return;
    } else if(n==12) {
        if(num[9]!=num[11]*num[10])
            return;
        else
            all++;
    }
    for(int i=1;i<14;i++) {
        if(mark[i]==0) {
            mark[i]=1;
            num[n]=i;
            dfs(n+1);
            mark[i]=0;
        }
    }
}
int main() {
    dfs(0);
    cout<<all<<endl;
    return 0;
}