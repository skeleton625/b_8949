#include <iostream>
using namespace std;

int a, b, t, r[20];
int main() {
	cin >> a >> b;
	while (a != 0 || b != 0) {
		r[t++] = a % 10 + b % 10;
		a /= 10; b /= 10;
	}
	for (int i = t - 1; i >= 0; i--) cout << r[i];
	return 0;
}