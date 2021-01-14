#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np, x, y, z;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	x = (k*l)/nl;
	y = c*d;
	z = p/np;
	cout << (x<y?(x<z?x:z):(y<z?y:z))/n << endl;
	return 0;
}
