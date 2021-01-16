#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int min = a[0]+a[1], minI=0, minJ=1;
	for(int i=0; i<n; i++) {
		if(abs(a[i]-a[(i+1)%n]) < min) {
			min = abs(a[i]-a[(i+1)%n]);
			minI = i;
			minJ = (i+1)%n;
		}
	}
	cout << minI+1 << " " << minJ+1 << endl;
	return 0;
}
