#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1000;
void sort(int a[], int n){
	for (int i = 0; i < n; i++)
	for (int j = i + 1; j < n; j++)
	if (a[i]>a[j])	swap(a[i], a[j]);
}
int main(){
	int n, q;
	while (cin >> n >> q){
		int num[maxn] = { 0 };
		int que[maxn] = { 0 };
		for (int i = 0; i < n; i++) cin >> num[i];
		for (int i = 0; i < q; i++)	cin >> que[i];
		sort(num, n); sort(que, q);

		for (int i = 0; i < q; i++){
			int count = 0;
			for (int j = 0; j < n; j++)
			if (que[i] == num[j]){
				cout << que[i] << " found at" << j << endl;
				count++;
			}
			if (count == 0) cout << que[i] << " not found" << endl;
		}
	}
	system("pause");
	return 0;
}