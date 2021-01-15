#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		char s[101];
		cin >> s;
		int len = strlen(s);
		if(len<=10)
			cout << s << endl;
		else {
			cout << s[0] << len-2 << s[len-1] << endl;
		}
	}
	return 0;
}
