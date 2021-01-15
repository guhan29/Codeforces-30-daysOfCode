#include <iostream>
using namespace std;

int main() {
	int flag=0, count=0;
	long long int num, rem;
	cin >> num;
	while(num != 0) {
		rem = num%10;
		if(rem == 4 || rem ==7)
			count++;
		num /= 10;
	}
	while(count != 0) {
		flag = 1;
		rem = count%10;
		if(rem != 4 && rem != 7) {
			flag = 0;
			break;
		}
		count /= 10;
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
