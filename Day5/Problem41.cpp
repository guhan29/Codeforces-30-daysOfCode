#include <iostream>
using namespace std;

int isPrime(int n) {
	for(int i=2; i<=n/2; i++)
		if(n%i == 0)
			return 0;
	return 1;
}

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=1000; i++) {
		if(isPrime(n*i + 1) == 0) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
