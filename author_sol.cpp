#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		// from observation, if 'r' exceeds 2 * 'l', then there is no answer
		if (r >= 2 * l) {
			cout << -1;
		} else {
			// otherwise, print 'r' itself (bare minimum)
			cout << r;
		}
		cout << '\n';
	}
	return 0;
}
