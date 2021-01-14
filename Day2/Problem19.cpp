#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	while(1) {
		int ga, gb;
		ga = gcd(a, n);
		if(n >= ga) {
			n -= ga;
		} else {
			cout << 1 << endl;
			break;
		}
		gb = gcd(b,n);
		ga = gcd(a, n);
		if(n >= gb) {
			n -= gb;
		} else {
			cout << 0 << endl;
			break;
		}
	}
	return 0;
}
