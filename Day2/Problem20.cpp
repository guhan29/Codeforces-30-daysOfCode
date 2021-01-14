#include <iostream>
using namespace std;

int main() {
	int n, max=0, pass=0;
	cin >> n;
	while(n--) {
		int t1, t2;
		cin >> t1 >> t2;
		pass += t2 -t1;
		if(pass > max)
			max = pass;
	}
	cout << max << endl;
	return 0;
}
