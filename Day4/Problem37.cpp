#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int max = a>b?a:b;
	max = 7-max;
	if(max == 1) cout << "1/6" << endl;
	else if(max == 2) cout << "1/3" << endl;
	else if(max == 3) cout << "1/2" << endl;
	else if(max == 4) cout << "2/3" << endl;
	else if(max == 5) cout << "5/6" << endl;
	else cout << "1/1" << endl;
	return 0;
}
