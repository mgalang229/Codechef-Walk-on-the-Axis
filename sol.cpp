#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// view the image in this repository for better understanding
		long long temp = (n * (n + 1)) / 2;
		cout << n + temp << '\n';
	}
	return 0;
}
