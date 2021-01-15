#include <iostream>
using namespace std;

int main() {
	int n, m, flag=1;
	cin >> n >> m;
	while(flag) {
		for(int i=1; i<=n; i++) {
			flag = 0;
			if(m < i)
				break;
			else {
				m -= i;
				flag = 1;
			}
		}
	}
	cout << m << endl;
	return 0;
}
