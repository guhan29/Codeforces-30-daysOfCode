#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if(num <= 10)
		cout << 0 << endl;
	else if(num <= 19)
		cout << 4 << endl;
	else if(num == 20)
		cout << 15 << endl;
	else if(num == 21)
		cout << 4 << endl;
	else
		cout << 0 << endl;	
	return 0;
}
