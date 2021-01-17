#include <iostream>
using namespace std;


int main() {
	int n, a=0, d=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		char ch;
		cin >> ch;
		if(ch == 'D') {
			d++;
		} else {
			a++;
		}
	}
	if(d == a)
		cout << "Friendship" << endl;
	else if(a > d)
		cout << "Anton" << endl;
	else
		cout << "Danik" << endl;
	return 0;
}
