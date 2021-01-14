#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char s[n];
	cin >> s;
	//cout << s << endl;
	int half = n/2, sum1=0, sum2=0;
	bool lucky = true;
	for(int i=0; i<n; i++) {
		if(s[i] != '4' && s[i] != '7') {
			lucky = false;
			break;
		}
		if(i < half)
			sum1 += s[i]-'0';
		else
			sum2 += s[i]-'0';
	}
	if(sum1 != sum2)
		lucky = false;
	if(lucky)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
