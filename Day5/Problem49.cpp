#include <iostream>
using namespace std;


int main() {
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	int a=abs(x1-x2)+abs(x1-x3), b=abs(x1-x2)+abs(x2-x3), c=abs(x1-x3)+abs(x2-x3);
	cout << ((a<b)?(a<c?a:c):(b<c?b:c)) << endl;
	return 0;
}
