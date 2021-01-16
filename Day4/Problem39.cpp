#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	int n, m, z;
	cin >> n >> m >> z;
	cout << z/(n*m/gcd(n, m)) << endl;
	return 0;
}
