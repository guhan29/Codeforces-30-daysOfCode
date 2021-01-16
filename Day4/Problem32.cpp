#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s[101], s1[101];
	cin >> s;
	cin >> s1;
	strrev(s1);
	if(!strcmp(s, s1))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
