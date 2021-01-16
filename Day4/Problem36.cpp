#include <iostream>
using namespace std;

int main() {
	long long int n, d;
	cin >> n >> d;
	long long int a[n], count=0;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i != j) {
				if(abs(a[i]-a[j]) <= d)
					count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
