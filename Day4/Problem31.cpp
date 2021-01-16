#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num = 8*n + 1, temp = sqrt(num);
	if(temp*temp == num)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
