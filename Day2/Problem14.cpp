#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int k, l, m, n, d,damaged=0;
	cin >> k >> l >> m >> n >> d;
	for(long long int i=1; i<=d; i++) {
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
			damaged++;
	}
	cout << damaged << endl;
	return 0;
}
