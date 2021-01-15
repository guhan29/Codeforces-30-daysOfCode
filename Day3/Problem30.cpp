#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char s[101];
	gets(s);
	int len = strlen(s);
	char ch = s[len-2];
	for(int i=len-1; i>=0; i--) {
		if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
			ch = s[i];
			break;
		}
	}
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
