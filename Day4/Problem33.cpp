#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], a, b, d=0;
	for(int i=1; i<n; i++) {
		cin >> arr[i];
	}
	cin >> a >> b;
	for(; a<b; a++) {
		d += arr[a];
	}
	cout << d << endl;
	return 0;
}
