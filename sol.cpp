#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout << 1 << '\n';
		return 0;
	}
	int cnt = 1, mx = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			cnt++;
		} else {
			cnt = 1;
		}
		mx = max(mx, cnt);
	}
	cout << mx << '\n';
	return 0;
}
