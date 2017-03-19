/*
凑算式

     B      DEF
A + --- + ------- = 10
     C      GHI

（如果显示有问题，可以参见【图1.jpg】）


这个算式中A~I代表1~9的数字，不同的字母代表不同的数字。

比如：
6+8/3+952/714 就是一种解法，
5+3/1+972/486 是另一种解法。

这个算式一共有多少种解法？

注意：你提交应该是个整数，不要填写任何多余的内容或说明性文字。


*/

#include<iostream>
using namespace std;
int mark[10]={0};
int num[10] ={0};
int n=0;
void dfs(int count) {
    if(count==9) {
        int sum=10*num[2]*(num[6]*100+num[7]*10+num[8]);
        int sum1=num[0]*num[2]*(num[6]*100+num[7]*10+num[8])+num[1]*(num[6]*100+num[7]*10+num[8])+num[2]*(num[3]*100+num[4]*10+num[5]);
        if(sum==sum1) n++;
        return;
    }
    for(int i=1;i<10;i++) {
        if(mark[i]==0) {
            mark[i]=1;
            num[count]=i;
            dfs(count+1);
            mark[i]=0;
        }
    }
}
int main() {
    dfs(0);
    cout<<n<<endl;
    return 0;
}