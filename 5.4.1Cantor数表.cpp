#include<stdio.h>
int main(){
    int x;
    int n=0;
    scanf("%d",&x);
    for(;n<x;n++)
        if((1+n)*n/2<x&&x<=(2+n)*(n+1)/2)
            if(x-n*(n+1)/4==0)
                printf("%d/%d",x-n*(n+1)/2,n+2-(x-n*(n+1)/2));
            else
                printf("%d/%d",n+2-(x-n*(n+1)/2),x-n*(n+1)/2);
    return 0;
}
//(1+n)*n/2<=x<=(2+n)*(n+1)/2
// x-(1+n)*n/2 / n-(x-(1+n)*n/2)
//第n+1排 第x-n*（n+1）个。  x-n／2n+1-x
