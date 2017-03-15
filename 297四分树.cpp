#include<iostream>
using namespace std;
char s[1000];
int A[32][32];
int cnt = 0;

void draw(char* s, int& n, int x, int y, int w)
{
	int ch = s[n++];
	if (ch == 'p') {
		draw(s, n, x, y, w / 2);
		draw(s, n, x + w / 2, y, w / 2);
		draw(s, n, x + w / 2, y + w / 2, w / 2);
		draw(s, n, x, y + w / 2, w / 2);
	}
	else if (ch == 'f') {
		for (int i = x; i < x + w; i++)
		for (int j = y; j < y + w; j++) {
			if (A[i][j] == 0) {
				A[i][j] = 1; cnt++;

			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	while (n--){
		for (int i = 0; i < 2; i++) {
			cin >> s;
			int x = 0;
			draw(s, x, 0, 0, 32);
		}
		cout << cnt;
	}
	system("pause");
	return 0;
}