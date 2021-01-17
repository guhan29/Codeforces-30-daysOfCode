#include <iostream>
using namespace std;

int main() {
	int n, k, time=240;
	cin >> n >> k;
	while(1) {
		if(5*n*(n+1)/2+k <= time) {
			cout << n << endl;
			break;
		} else {
			n--;
		}
	}
	return 0;
}
