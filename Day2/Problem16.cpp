#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int maxInd = 0, minInd = 0;
	for(int i=1; i<n; i++) {
		if(a[i] > a[maxInd])
			maxInd = i;
		if(a[i] <= a[minInd])
			minInd = i;
	}
	if(maxInd > minInd)
		cout << maxInd + n-minInd-2 << endl;
	else
		cout << maxInd + n-minInd-1 << endl;
	return 0;
}
