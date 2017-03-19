/*
煤球数目

有一堆煤球，堆成三角棱锥形。具体：
第一层放1个，
第二层3个（排列成三角形），
第三层6个（排列成三角形），
第四层10个（排列成三角形），
....
如果一共有100层，共有多少个煤球？

请填表示煤球总数目的数字。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字。

#include<stdio.h>
int main(){
	int a,s,n;
	for(a=1,n=1,s=0;n<101;n++){
		//printf("%d\n",a);
		a += n+1;
		s += a;
	}
	printf("%d",s);
}
*/

#include<iostream>
using namespace std;
int main() {
    int all=0;
    for(int i=1;i<101;i++)
        all+=((1+i)*i/2);
    cout<<all<<endl;
    return 0;
}
