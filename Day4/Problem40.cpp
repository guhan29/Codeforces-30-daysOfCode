#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], max=0, sum=0;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] > max)
			max = a[i];
	}
	for(int i=0; i<n; i++)
		sum += max-a[i];
	cout << sum << endl;
	return 0;
}
