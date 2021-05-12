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
		// view the image in this repository for problem visualization
		long long a = n * 2;
		n--;
		long long b = (n * (n + 1)) / 2;
		cout << a + b << '\n';
	}
	return 0;
}
