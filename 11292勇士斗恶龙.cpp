//总结:1.对骑士和龙的排序,从小到大以此抵消既是最小cost
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int Max = 20000 + 10;
void Sort(int a[], int n){
	for (int i = 0; i < n;i++)
	for (int j = i + 1; j < n;j++)
	if (a[i]>a[j])
	{
		a[i] += a[j];
		a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}
}
int main(){
	int n, m;
	while(scanf("%d %d", &n, &m) == 2){
		if (n == 0 && m == 0)	break;
		int D[Max] = { 0 };
		int K[Max] = { 0 };
		int cost = 0;
		int cur = 0;
		for (int i = 0; i < n; i++)	scanf("%d", &D[i]);
		for (int i = 0; i < m; i++)	scanf("%d", &K[i]);
		Sort(D, n); Sort(K, m);
		for (int i = 0; i < m; i++)
		{
			if (D[cur] <= K[i])	cost += K[i];
			if (++cur == n)	break;
		}
			if (cur < n)	cout << "Loowater is doomed!" << endl;
			else cout << cost << endl;
	}
	system("pause");
	return 0;
}