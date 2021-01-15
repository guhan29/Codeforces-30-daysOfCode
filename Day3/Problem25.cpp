#include <iostream>
using namespace std;

int isPrime(int n) {
	for(int i=2; i<=n/2; i++)
		if(n%i == 0)
			return 0;
	return 1;
}

int main() {
	int n, m, prime;
	cin >> n >> m;
	prime = n;
	for(int i=n+1; i<=m; i++) {
		if(isPrime(i)) {
			prime = i;
			break;
		}
	}
	if(prime == m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
